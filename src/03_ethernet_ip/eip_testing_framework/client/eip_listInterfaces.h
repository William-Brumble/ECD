#ifndef EIP_LISTINTERFACES
#define EIP_LISTINTERFACES

#include <stdint.h>
#include "eip_dataTypes.h"

void
request_list_interfaces(struct eip_header input_structure,
                        int32_t session_handle,
                        int8_t sender_context[8]);

#endif /* EIP_LISTINTERFACES */