#include "stdio.h"
 
void foo(void)
{
 printf("Geeks");
}
void bar(void)
{
 printf("Quiz");
}
 
int main()
{
	// Left to Right
	(foo(), bar());
 
	int x;

	// Left to Right
	x = (2,3);
 
	printf("%d\n", x);
	return 0;
}
