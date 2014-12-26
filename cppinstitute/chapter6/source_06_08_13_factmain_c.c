#include <stdio.h>
#include "factorial.h"

int main(int argc, char *argv[]) {
	int n, result;

	printf("Enter n value:");
	scanf("%d", &n);
	if(n <= 0 || n > 20) {
	printf("Bad news: you've entered an invalid value.\n");
	return 1;
	}

	result = factorial(n);

	printf("Factorial of %d is %d\n", n, result);

	return 0;
}
