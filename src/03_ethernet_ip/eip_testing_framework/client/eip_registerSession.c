#include "eip_registerSession.h"

void
request_register_session(struct eip_header *input_structure,
                         int32_t *session_handle,
                         int8_t *sender_context,
						 int32_t *clientSocket,
						 char *send_buff
						 )
{
    input_structure->command = 0x0065;
    input_structure->length = 0x0004;
    input_structure->session_handle = *session_handle;
    input_structure->status = 0x00000000;
	for(int i = 0; i < 8; i++)
	{
		input_structure->sender_context[i] = sender_context[i];
	}
    input_structure->options = 0x00000000;
	memcpy(send_buff, input_structure, 24);
	send(*clientSocket, send_buff, 24, 0);
}
