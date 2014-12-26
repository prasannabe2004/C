#include <stdio.h>

void hello(void) {
	int i;

	for(i = 0; i < 2; i++)
	    printf ("You've invoked me - what fun!\n");
	return;
}
int main(void) {
	int i;
	printf("We are about to invoke hello()!\n");
	for(i = 0; i < 3; i++)
	     hello();
	printf("We returned from hello()!\n");
	return 0;
}
