cmake_minimum_required(VERSION 3.16)

set(api_source_files
	api_controller.c
	api_controller.h
)
add_library(lib_api ${api_source_files})
