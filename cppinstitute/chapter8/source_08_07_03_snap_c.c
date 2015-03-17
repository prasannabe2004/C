#include <stdio.h>

#define SNAP(X) printf("variable "#X" = %d\n",X)

int main(void) {
	int i = 0;
	int counter = 1;
	int SheepTotal = 261;

	SNAP(i);
	SNAP(counter);
	SNAP(SheepTotal);

	return 0;
}