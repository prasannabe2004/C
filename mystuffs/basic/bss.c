#include <stdio.h>
#include <stdlib.h>

int i;

int main()
{
	int c;
    int j;
    int *k = (int *) malloc (sizeof(int));
	int *a;
	int *b;

	printf("sizeofint=%ld\n",sizeof(int));
	printf("i=%p\nc=%p\nj=%p\nk=%p\n*k=%p\na=%p\nb=%p\n", &i, &c, &j ,&k, k, &a, &b);
}
