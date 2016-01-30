#include <stdio.h>
#include <signal.h>

void myHandler()
{
	printf("Signal caught\n");
}

int main()
{
	struct sigaction handler;
	handler.sa_handler = myHandler;
	sigaction(SIGALRM,&handler,NULL);
	while(1)
	{
		alarm(5);
		pause();
	}
	return 0;
}

