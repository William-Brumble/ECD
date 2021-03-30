#include "eip_listInterfaces.h"

/*
 * The optional List Interfaces command shall be used by a connection originator
 * to identify non-CIP communication interfaces associated with the target. */
void
request_list_interfaces(struct eip_header *input_structure,
                        int32_t *session_handle,
                        int8_t *sender_context,
						int32_t *clientSocket,
						char *send_buff)
{
    input_structure->command = 0x0064;                  	 // Hard coded
    input_structure->length = htons(0x0000);                 // Hard coded
    input_structure->session_handle = *session_handle;       // Ignored by targ
    input_structure->status = htonl(0x00000000);             // Hard coded
    /* Sender context chosen by sender */               
	for(int i = 0; i < 8; i++)
	{
		input_structure->sender_context[i] = sender_context[i];
	}
    input_structure->options = htonl(0x00000000);             // Hard coded
	memcpy(send_buff, input_structure, 24);
	send(*clientSocket, send_buff, 24, 0);
}
