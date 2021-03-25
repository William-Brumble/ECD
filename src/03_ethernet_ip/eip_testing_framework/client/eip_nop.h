#ifndef EIP_NOP
#define EIP_NOP

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "eip_dataTypes.h"

void
send_request_nop(struct eip_header *input_structure,
            int32_t *session_handle,
            int8_t *sender_context,
            int32_t *clientSocket,
            char *send_buff);

#endif /* EIP_NOP */