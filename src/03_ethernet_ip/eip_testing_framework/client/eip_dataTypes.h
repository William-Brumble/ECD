#ifndef EIP_DATATYPES
#define EIP_DATATYPES

#include <stdint.h>

struct eip_header {
    int16_t command;                        // = 16bit 2 bytes      UINT
    int16_t length;                         // = 16bit 2 bytes      UINT
    int32_t session_handle;                 // = 32bit 4 bytes      UDINT
    int32_t status;                         // = 32bit 4 bytes      UDINT
    int8_t sender_context[8];               // = 8bit  1 bytes * 8  OCTET
    int32_t options;                        // = 32bit 4 bytes      UDINT
};

#endif /* EIP_DATATYPES */