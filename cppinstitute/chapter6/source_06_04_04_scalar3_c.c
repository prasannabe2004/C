#include <stdio.h>

void functionx(int *ptr) {
	*ptr = *ptr + 100;
}

int main(void) {
	int i = 100;
	int *p = &i;

	printf("i = %d\n",i);
	functionx(p);
	printf("i = %d\n",i);
	return 0;
}