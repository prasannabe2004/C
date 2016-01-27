#include <stdio.h>
#include <stdlib.h>
  
void fun(int **a)
{
    *a = (int*)malloc(sizeof(int));
	printf("a=%x %x %x\n",&a, a, *a);
}
  
int main()
{
    int *p=NULL;
	printf("p=%x %x\n",&p,p);
    fun(&p);
	printf("p=%x %x\n",&p,p);
    *p = 6;
	printf("value at p = %d\n",*p);
    return(0);
}
