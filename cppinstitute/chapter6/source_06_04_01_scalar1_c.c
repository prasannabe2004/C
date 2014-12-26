#include <stdio.h>

void function(int param) {
	printf("I've received value %d\n", param);
}

int main(void) {
	int variable = 111;

	function(1000);
	function(variable);
	function(variable + 1000);
	return 0;
}