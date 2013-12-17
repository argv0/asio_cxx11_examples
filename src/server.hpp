#ifndef __SERVER_HPP_
#define __SERVER_HPP_

#include <asio.hpp>
#include <string>
#include "kvdb.hpp"
#include "connection.hpp"

using asio::ip::tcp;

class server
{
public:
    server(const std::string& address);
    void run();
private:
    void start_accept();
private:
    kvdb db_;
    asio::io_service io_service_;
    asio::signal_set signals_;
    tcp::acceptor acceptor_;
    connection_ptr new_connection_;
};

#endif // include guard
