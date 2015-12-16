#include <stdio.h>

int array[] = { 23, 34, 12, 17, 204, 99, 16 };

//#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(int))

int main()
{
	int d= -1, x;
	
	printf("ele=%ld\n",TOTAL_ELEMENTS);
	
	if (d <= TOTAL_ELEMENTS-2)
	/* 
	 * This bug occurs under ANSI C, and under K&R C if sizeof() 
	 * had an unsigned return type in a given implementation. 
	 * It can be fixed by putting an int cast immediately before 
	 * the TOTAL_ELEMENTS
	 * if (d <= (int)TOTAL_ELEMENTS-2)
	 * */
	{
		printf("if statement %ld\n", TOTAL_ELEMENTS);
		x = array[d+1];
	}
	printf("x=%d\n",x);

	return 0;
}
