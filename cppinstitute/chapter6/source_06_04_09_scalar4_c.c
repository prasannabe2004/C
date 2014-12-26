#include <stdio.h>

void incr(int *value) {
	(*value)++;
}

int main(void) {
	int var = 100;

	incr(&var);
	printf("var = %d\n", var);
	return 0;
}

