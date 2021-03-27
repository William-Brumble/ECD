#ifndef EIP_TESTFRAMEWORKSERVER
#define EIP_TESTFRAMEWORKSERVER

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdint.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"

int32_t initialize_socket(int32_t *clientSocket);

#endif /* EIP_TESTFRAMEWORKSERVER */
