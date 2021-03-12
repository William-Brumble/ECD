cmake_minimum_required(VERSION 3.16)

set(sockets_source_files
	sockets_controller.c
	sockets_controller.h
	tcp_server.c
	tcp_server.h
)
add_library(lib_sockets ${sockets_source_files})
