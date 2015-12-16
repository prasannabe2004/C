#include <stdio.h>

int main()
{
	int choice = 1;
	
	switch(choice)
	{
		printf("Inside Switch\n");
		case 0:
			printf("0\n");
			break;
		case 1:
			if(choice == 1)
			{
				printf("Inside if\n");
				break;
			}
			printf("outside if\n");
			break;			
	}
	printf("outside switch\n");
	return 0;
}
