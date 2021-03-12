cmake_minimum_required(VERSION 3.16)

set(cip_source_files
	cip_controller.c
	cip_controller.h
	common_services.c
	common_services.h
	obj_connection_manager.c
	obj_connection_manager.h
	obj_ethernet_link.c
	obj_ethernet_link.h
	obj_identity.c
	obj_identity.h
	obj_message_router.c
	obj_message_router.h
	obj_tcp_ip_interface.c
	obj_tcp_ip_interface.h
	obj_unconnected_message_manager.c
	obj_unconnected_message_manager.h
)
add_library(lib_cip ${cip_source_files})
