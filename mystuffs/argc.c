#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int a = 10;

	argc = 2;

	argv[1] = "Hello";

	printf("argc=%d argv[0]=%s argv[1]=%s\n",argc,argv[0],argv[1]);

	exit(100);

}
