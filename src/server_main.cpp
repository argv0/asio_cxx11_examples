#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <asio.hpp>
#include "server.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    unsigned port = 4050;
    if (argc > 1)
        port = atoi(argv[1]);
    cout << "Serving on port " << port << endl;

    try {
        server server("127.0.0.1");
        server.run();
    }
    catch (std::exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
