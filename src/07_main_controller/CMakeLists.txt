cmake_minimum_required(VERSION 3.16)

set(output_source_files
	main.c
)

add_executable(ecd ${output_source_files})

target_link_libraries(ecd lib_sockets)
target_link_libraries(ecd lib_serializer)
target_link_libraries(ecd lib_eip)
target_link_libraries(ecd lib_cip)
target_link_libraries(ecd lib_system)
target_link_libraries(ecd lib_api)
