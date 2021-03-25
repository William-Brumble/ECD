#ifndef EIP_LISTSERVICES
#define EIP_LISTSERVICES

#include <stdint.h>
#include "eip_dataTypes.h"

void
request_list_services(struct eip_header input_structure,
                      int32_t session_handle,
                      int8_t sender_context[8]);

#endif /* EIP_LISTSERVICES */