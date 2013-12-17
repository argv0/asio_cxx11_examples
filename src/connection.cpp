#include "connection.hpp"

void connection::read_header() {
    readbuf_.resize(HEADER_SIZE);
    auto self = shared_from_this();
    asio::async_read(socket_, 
        asio::buffer(readbuf_),
        [this, self](const std::error_code& error,
                     const std::size_t) {
           if (!error) { 
               std::uint32_t len = packed_request_.decode_header(readbuf_);
               read_body(len);
           }
        }
    );
}       

void connection::read_body(std::uint32_t len)  {
    readbuf_.resize(HEADER_SIZE+len);
    auto self = shared_from_this();
    asio::async_read(socket_, 
        asio::buffer(&readbuf_[HEADER_SIZE], len),
        [this, self](const std::error_code& error,
                     const std::size_t) { 
            if (!error) { 
                handle_request();
                read_header();
            }
        }
    );

}

void connection::handle_request() {
    if (packed_request_.unpack(readbuf_)) { 
        request_ptr req = packed_request_.get_msg();
        response_ptr resp = prepare_response(req);
        std::vector<std::uint8_t> writebuf;
        packed_message<asio_sample::response> resp_msg(resp);
        resp_msg.pack(writebuf);
        asio::write(socket_, asio::buffer(writebuf));
    }
}

connection::response_ptr connection::prepare_response(request_ptr req) 
{
    std::string value;
    switch (req->type()) { 
    case asio_sample::request::GET_VALUE: { 
        std::string key = req->request_get().key();
        value = db_.get(key);
        break;
    }
    case asio_sample::request::SET_VALUE: { 
        std::string key = req->request_set().key();
        value = req->request_set().value();
        db_.set(req->request_set().key(), value);
        break;
    }}
    auto resp(std::make_shared<asio_sample::response>());
    resp->set_value(value);
    return resp;
}
