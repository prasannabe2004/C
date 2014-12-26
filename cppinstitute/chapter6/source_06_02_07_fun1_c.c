#include <stdio.h>

void hello(void) {
	printf ("You've invoked me - what fun!\n");
	return;
}

int main(void) {
	printf("We are about to invoke hello()!\n");
	hello();
	printf("We returned from hello()!\n");
	return 0;
}
