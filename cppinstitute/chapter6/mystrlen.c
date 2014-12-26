#include <stdio.h>


int mystrlen(char *str) 
{
	char *begin;
    for(begin = str; *str; str++)
		;
	printf("str=%p begin=%p\n",str,begin);
    return str - begin;
}

int main()
{
	char src[10] = "prasanna";
	
	printf("%d\n",mystrlen(src));
	return 0;
}
