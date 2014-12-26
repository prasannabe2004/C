#include <stdio.h>

int main(void) {
	int i = 15, j = 22;
	int log = i && j;
	
	printf("log = %d\n", log);
	
	int bit = i & j;
	printf("bit = %d\n", bit);
	
	int logneg = !i;
	printf("logneg = %d\n", logneg);
	
	int bitneg = ~i;
	printf("bitneg = %d\n", bitneg);
	
	return 0;
}
