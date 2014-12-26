#include <stdio.h>
#include <string.h>

int main(void) {
	char str[10];
	int i;

	strcat(str,"Bump!");
	printf("%s",str);
	return 0;
}