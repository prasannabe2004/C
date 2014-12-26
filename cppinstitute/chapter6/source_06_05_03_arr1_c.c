#include <stdio.h>

void mul2(int *arrptr) {
	int i;

	for(i = 0; i < 5; i++)
		arrptr[i] *= 2;
}

int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i;

	for(i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	mul2(arr);
	for(i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}