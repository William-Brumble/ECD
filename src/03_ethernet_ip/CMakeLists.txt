cmake_minimum_required(VERSION 3.16)

set(eip_source_files
	eip_controller.c
	eip_controller.h
)
add_library(lib_eip ${eip_source_files})
