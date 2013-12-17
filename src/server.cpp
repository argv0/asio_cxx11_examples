#include "server.hpp"
#include <thread>
#include <vector>

using std::thread;

server::server(const std::string& address) 
  : signals_(io_service_),
    acceptor_(io_service_),
    new_connection_()
{
    signals_.add(SIGINT);
    signals_.add(SIGTERM);
    signals_.async_wait(std::bind(&asio::io_service::stop, &io_service_));
    tcp::resolver resolver(io_service_);
    tcp::resolver::query query(address, "8122");
    tcp::endpoint endpoint = *resolver.resolve(query);
    acceptor_.open(endpoint.protocol());
    acceptor_.set_option(tcp::acceptor::reuse_address(true));
    acceptor_.bind(endpoint);
    acceptor_.listen();
    start_accept();
}

void server::run()
{
    std::vector<std::shared_ptr<thread> > threads;
    for (std::size_t i = 0; i < thread::hardware_concurrency(); ++i)  { 
        auto runner = [this](){ io_service_.run(); };
        threads.push_back(std::make_shared<thread>(runner));
    }
    for (auto t: threads) t->join();
}

void server::start_accept()
{
    new_connection_ = std::make_shared<connection>(io_service_, db_);
    acceptor_.async_accept(new_connection_->socket(),
         /* callback */
        [this](const std::error_code& error) { 
            if (!error) { 
                new_connection_->start();
                start_accept();
            }
        }
    );
}
