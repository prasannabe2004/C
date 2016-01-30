#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void InterruptSignalHandler (int signalType);

int main (int argc, char *argv[]) {
	/* Signal handler specification structure */
	struct sigaction handler;
	
	/* Set handler function */
	handler.sa_handler = InterruptSignalHandler; 
	
	/* Create mask that masks all signals */

	handler.sa_flags = 0;
	/* Set signal handling for interrupt signals */
	if (sigaction(SIGINT,&handler, 0) < 0) 
		perror("sigaction() failed:");
	
	if (sigemptyset(&handler.sa_mask) < 0) 
		perror("sigemptyset() failed:");
	
/* Suspend program until signal received */
	for(;;) pause();
	
	exit(0);
}

void InterruptSignalHandler(int signalType) {
	printf ("Interrupt received. Exiting program.\n");
	exit(EXIT_SUCCESS);
}

