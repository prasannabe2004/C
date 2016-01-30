#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>
#include <signal.h>

void sighandler()
{
	syslog(LOG_INFO, "SIGTERM handled\n");
	exit(EXIT_SUCCESS);
}

int main(int argc,char** argv)
{
	int pid = fork();

	switch(pid)
	{
		case 0:
			/* Child */
			printf("Child PID is %d\n",getpid());
			umask(0);
			if(-1 == setsid())
			{
				perror("setsid:");
				exit(EXIT_FAILURE);
			}
			openlog(argv[0],LOG_NOWAIT|LOG_PID,LOG_USER);
			close(STDIN_FILENO);
			close(STDOUT_FILENO);
			close(STDERR_FILENO);
			break;
		case -1:
			/* Failure */
			perror("Fork:");
			exit(EXIT_FAILURE);
		default:
			/* Parent */
			printf("Parent PID is %d\n",getpid());
			exit(EXIT_SUCCESS);
	}

	signal(SIGTERM,sighandler);
	
	while(1)
	{
		syslog(LOG_INFO, "PID = %d\n",getpid());
		pause();
	}

	return 0;
}
