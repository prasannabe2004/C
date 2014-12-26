#include <math.h>
#include <stdio.h>

float square(float param) {
	return  param * param;
}

int main(void) {
	float a, b, a_sqr, b_sqr, c;

	printf("A?\n");
	scanf("%f", &a);
	a_sqr = square(a);
	printf("B?\n");
	scanf("%f", &b);
	b_sqr = square(b);
	c = sqrtf(a_sqr + b_sqr);
	printf("The length of the hypotenuse is: %f\n", c);
	return 0;
}
