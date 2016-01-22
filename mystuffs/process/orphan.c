#include <stdio.h>
#include <stdlib.h>

int main()
{

	int ret = fork();

	switch(ret)
	{
		case -1:
			exit(EXIT_FAILURE);
		case 0:
			printf("Child process\n");
			pause();
			break;
		default:
			printf("parent process\n");
	}
	exit(EXIT_SUCCESS);
}
