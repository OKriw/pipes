#include <stdio.h>
#include "pipe_communication.h"
#include <unistd.h>
pid_t child;

int main(int argc, char *argv[])
{
	if((child=fork())==-1)
		perror("Error");
	if(child==0){
		server(1,2);
		_exit(0);
	}
	client(3,4);
	waitpid(child, NULL, 0);
	_exit(0);
}
