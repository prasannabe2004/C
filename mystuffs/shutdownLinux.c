#include<stdio.h>
#include<stdlib.h>

int main()
{
	char st;
	printf(" Are you sure to shutdown your computer. Please mention(y/n)");
	scanf("%c",&st);

	if(st=='y' || st=='Y')
	{
		system("sudo shutdown -h now");
	}
	return(0);
}
