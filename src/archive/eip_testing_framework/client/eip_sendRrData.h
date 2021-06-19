#ifndef EIP_SENDRRDATA
#define EIP_SENDRRDATA

#include "eip_dataTypes.h"
#include <stdio.h>
#include <stdint.h>

void
request_send_rr_data(struct eip_header input_structure,
                     int32_t session_handle,
                     int16_t length,
                     int8_t sender_context[8]);

#endif /* EIP_SENDRRDATA */
