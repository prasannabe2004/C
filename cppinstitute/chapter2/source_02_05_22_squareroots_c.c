#include <stdio.h>
#include <math.h>

int main(void) {
	float value,squareroot;

	printf("Give me a number and I will find its square root:\n");
	scanf("%f", &value);
	if(value >= 0.0) {
		squareroot = sqrtf(value);
		printf("You have given: %f\n",value);
		printf("The sqare root is: %f\n",squareroot);
	}
	return 0;
}
