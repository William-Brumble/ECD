#include "eip_testFramework_controller.h"
#include "eip_dataTypes.h"
#include "eip_listIdentity.h"
#include "eip_listInterfaces.h"
#include "eip_listServices.h"
#include "eip_nop.h"
#include "eip_registerSession.h"
#include "eip_sendRrData.h"
#include "eip_sendUnitData.h"
#include "eip_testFramework_server.h"
#include "eip_unregisterSession.h"

int
main(int argc, char *argv[])
{
    /* Make sure that two arguments were called */
    if(argc < 2)
    {
        printf("Missing command option.\n");
        exit(0);
    }

    /* Used to store data to send with the socket */
    send_buff 	 = (char *) malloc(65535);
    if(send_buff == NULL)
    {
        printf("Error allocating memory for send buffer.\n");
        exit(0);
    }

    /* Used to store data received from the socket */
    recv_buff 	 = (char *) malloc(65535);
    if(recv_buff == NULL)
    { return -1;
        printf("Error allocating memory for recv buffer.\n");
        exit(0);
    }

    /* Lets fire up the socket */
    initialize_socket(&our_socket);

    /* Parse user input command */
    input_comparer = 9; // Set default value out of range for switch statement
    if(strcmp(argv[1], "listidentity") == 0)             {input_comparer = 1;}
    if(strcmp(argv[1], "listinterfaces") == 0)           {input_comparer = 2;}
    if(strcmp(argv[1], "listservices") == 0)             {input_comparer = 3;}
    if(strcmp(argv[1], "nop") == 0)                      {input_comparer = 4;}
    if(strcmp(argv[1], "registersession") == 0)          {input_comparer = 5;}
    if(strcmp(argv[1], "sendrrdata") == 0)               {input_comparer = 6;}
    if(strcmp(argv[1], "sendunitdata") == 0)             {input_comparer = 7;}
    if(strcmp(argv[1], "unregistersession") == 0)        {input_comparer = 8;}

	session_handle = 0x00000001;
    /* Select command based on parsed input command */
    switch(input_comparer)
    {
        case 1:
            request_list_identity(&input_structure,
								  &session_handle,
								  &send_via_broadcast,
								  &our_socket,
								  send_buff);
            break;
        case 2:
            //request_list_interfaces();
            break;
        case 3:
            //request_list_interfaces();
            break;
        case 4:
            send_request_nop(&input_structure,
                             &session_handle,
                             &sender_context[0],
                             &our_socket,
                             send_buff);
            break;
        case 5:
            //request_register_session();
            break;
        case 6:
            //request_send_rr_data();
            break;
        case 7:
            //prequest_send_unit_data();
            break;
        case 8:
            //request_unregister_session();
            break;
        default:
            printf("Invalid input command specified.\n");
            exit(0);
    }
	free(send_buff);
}
