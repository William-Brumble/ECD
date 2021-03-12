cmake_minimum_required(VERSION 3.16)

set(system_source_files
	system_controller.c
	system_controller.h
	data_types.h
)
add_library(lib_system ${system_source_files})
