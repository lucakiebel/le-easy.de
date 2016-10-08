#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>


void signal_handler(int signo){

	signal(signo, signal_handler);

}

int main(int argc, char *argv[]) {


	signal( SIGINT, signal_handler);

	while(1){
		usleep(10);
		printf("error\n");
	}

	return 0;
}

