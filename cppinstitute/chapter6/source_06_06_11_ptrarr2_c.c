#include <stdio.h>
#include <stdlib.h>

void printarrptr(int **t) {
	int i,j;
	for(i = 0; i<3; i++) {
		for(j = 0; j<3; j++) 
			printf("%d\t",t[i][j]);
		printf("\n");
	}
}

int main(void) {
	int *arrptr[3];
	int i,j;

	for(i = 0; i < 3; i++) {
		arrptr[i] = (int *) malloc(3 * sizeof(int));
		for(j = 0; j < 3; j++)
			arrptr[i][j] = (3 * i) + j + 1;
	}
    printarrptr(arrptr);
	for(i = 0; i < 3; i++)
		free(arrptr[i]);
	return 0;
}