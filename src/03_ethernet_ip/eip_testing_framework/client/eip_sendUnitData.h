#ifndef EIP_SENDUNITDATA
#define EIP_SENDUNITDATA

#include <stdint.h>
#include <stdio.h>
#include "eip_dataTypes.h"

void
request_send_unit_data(struct eip_header input_structure,
                       int32_t session_handle,
                       int16_t length,
                       int8_t sender_context[8]);

#endif /* EIP_SENDUNITDATA */
