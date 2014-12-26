#include <stdio.h>

void function(int param) {
	printf("I've received value %d\n", param);
	param++;
}

int main(void) {
	int variable = 111;

	function(variable);
	printf("variable %d\n", variable);
	return 0;
}