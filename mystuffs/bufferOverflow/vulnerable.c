#include <string.h>
#include <stdio.h>
//0x0804847d address for this function
//0xffffda23: for shell
void function()
{
	printf("hacked\n");
}

int main(int argc, char *argv[]) 
{
	char buffer[100];
	memset(buffer,0,100);
	//printf("function=%x main=%x\n",function,main);
	strcpy(buffer, argv[1]);
	//function();
	printf("Done!\n");
}
