cmake_minimum_required(VERSION 3.16)

project(eip_testframwork)

set(listIdentity_files
	eip_listIdentity.c
	eip_listIdentity.h
)
add_library(listIdentity ${listIdentity_files})

set(listInterfaces_files
	eip_listInterfaces.c
	eip_listInterfaces.h
)
add_library(listInterfaces ${listInterfaces_files})

set(listServices_files
	eip_listServices.c
	eip_listServices.h
)
add_library(listServices ${listServices_files})

set(nop_files
	eip_nop.c
	eip_nop.h
)
add_library(nop ${nop_files})

set(registerSession_files
	eip_registerSession.c
	eip_registerSession.h
)
add_library(registerSession ${registerSession_files})

set(sendRrData_files
	eip_sendRrData.c
	eip_sendRrData.h
)
add_library(sendRrData ${sendRrData_files})

set(sendUnitData_files
	eip_sendUnitData.c
	eip_sendUnitData.h
)
add_library(sendUnitData ${sendUnitData_files})

set(testFrameworkServer_files
	eip_testFramework_server.c
	eip_testFramework_server.h
)
add_library(testFrameworkServer ${testFrameworkServer_files})

set(unregisterSession_files
	eip_unregisterSession.c
	eip_unregisterSession.h
)
add_library(unregisterSession ${unregisterSession_files})

set(output_source_files
    eip_testFramework_controller.c
    eip_testFramework_controller.h
)
add_executable(eip_testframwork ${output_source_files})

target_link_libraries(eip_testframwork listIdentity)
target_link_libraries(eip_testframwork listInterfaces)
target_link_libraries(eip_testframwork listServices)
target_link_libraries(eip_testframwork nop)
target_link_libraries(eip_testframwork registerSession)
target_link_libraries(eip_testframwork sendRrData)
target_link_libraries(eip_testframwork sendUnitData)
target_link_libraries(eip_testframwork testFrameworkServer)
target_link_libraries(eip_testframwork unregisterSession)