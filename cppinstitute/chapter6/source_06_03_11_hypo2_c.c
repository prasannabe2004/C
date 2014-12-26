#include <math.h>
#include <stdio.h>

int main(void) {
	float a, b, a_sqr, b_sqr, c;

	printf("A?\n");
	scanf("%f", &a);
	a_sqr = a * a;
	printf("B?\n");
	scanf("%f", &b);
	b_sqr = b * b;
	c = sqrtf(a_sqr + b_sqr);
	printf("The length of the hypotenuse is: %f\n", c);
	return 0;
}
