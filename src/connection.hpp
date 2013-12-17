#ifndef __CONNECTION_HPP_
#define __CONNECTION_HPP_

#include <asio.hpp>
#include <memory>
#include <vector>
#include "packed_message.hpp"
#include "sample.pb.h"
#include "kvdb.hpp"

using asio::ip::tcp;

class connection: public std::enable_shared_from_this<connection> {
public:
    typedef std::shared_ptr<asio_sample::request> request_ptr;
    typedef std::shared_ptr<asio_sample::response> response_ptr;
public:
    connection(asio::io_service& io_service, kvdb& db)
        : socket_(io_service),
          packed_request_(std::make_shared<asio_sample::request>()),
          db_(db)
    {}
    tcp::socket& socket() { return socket_; }
    void start() { read_header(); }
private:
    void read_header();
    void read_body(const std::uint32_t len);
    void handle_request();
    response_ptr prepare_response(request_ptr req);
private:
    kvdb& db_;
    tcp::socket socket_;
    std::vector<std::uint8_t> readbuf_;
    packed_message<asio_sample::request> packed_request_;
};

typedef std::shared_ptr<connection> connection_ptr;

#endif // include guard
