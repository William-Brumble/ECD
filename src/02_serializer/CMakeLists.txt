cmake_minimum_required(VERSION 3.16)

set(serializer_source_files
	serial_controller.c
	serial_controller.h
)
add_library(lib_serializer ${serializer_source_files})
