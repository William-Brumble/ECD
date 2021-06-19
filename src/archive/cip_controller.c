#include "cip_controller.h"
#include "obj_connection_manager.h"
#include "obj_ethernet_link.h"
#include "obj_identity.h"
#include "obj_message_router.h"
#include "obj_tcp_ip_interface.h"
#include "obj_unconnected_message_manager.h"

int
cip_controller()
{
    /* If this is the first time running, let's initialize. */
	if(four_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		four_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(four_initialize() == -1) { return -1; }
	}

    return 0;
}
