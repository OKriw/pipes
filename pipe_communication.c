#include "pipe_communication.h"

void client( int r_fd, int w_fd )
{
	printf("I am client %i %i \n", r_fd, w_fd);
	
};

void server( int r_fd, int w_fd )
{
	printf("I am server %i %i\n", r_fd, w_fd);
};
