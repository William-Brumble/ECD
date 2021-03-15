#include "api_controller.h"


int api_controller()
{
	/* If this is the first time running, let's initialize. */
	if(six_first_scan == 1)
	{
		/* Change variable to indicate program has been ran */
		six_first_scan = 0;

		/* Perform first time running layer one initialization */
		if(six_initialize() == -1) { return -1; }
	}

    return 0;
}
