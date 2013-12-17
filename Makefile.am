AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4 -I/usr/local/include
bin_PROGRAMS = asio_example_server
asio_example_server_SOURCES = src/sample.pb.cc \
                              src/server.cpp \
			      src/server_main.cpp \
	                      src/connection.cpp
asio_example_server_LDFLAGS = -lprotobuf
asio_example_server_CXXFLAGS = -O3 -std=c++11 
