#include "stdio.h"
 
void foo(void)
{
 printf("Geeks");
}
void bar(void)
{
 printf("Quiz\n");
}

int f()
{
	printf("f\n");
	return 1;
}

int g()
{
	printf("g\n");
	return 2;
} 

int h()
{
	printf("h\n");
	return 3;
}  
int main()
{
	// Left to Right first foo and then bar
	(foo(), bar());
 
	int x;

	// Left to Right gives 3
	x = (2,3);

	// f, g, h
	x = f() + g() * h();
	printf("%d\n", x);
	
	// a = 2
	int a, b = 1, c = 2;
	a = b = c;
	printf("%d\n", a);
	
	return 0;
}
