#include <stdio.h>

void printarr(int t[][3]) {
	int i,j;
	for(i = 0; i<3; i++) {
		for(j = 0; j<3; j++) 
			printf("%d\t",t[i][j]);
		printf("\n");
	}
}

int main(void) {
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	printarr(arr);
	return 0;
}