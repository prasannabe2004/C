/* 	program reads a sequence of numbers and counts how many numbers
	is even and how many is odd;
	program terminates when a zero is entered     */

#include <stdio.h>

int main(void) {
	/* we will count the numbers here */
	int Evens = 0, Odds = 0;

	/* we will store the incoming numbers here */
	int Number;

	/* read first number */
	scanf("%d",&Number);

	/* 0 terminates execution */
	while(Number != 0) {
		/* check if the number is odd */
		if(Number % 2 == 1)
			/* increase „odd” counter */
			Odds++;
		else
			/* increase „even” counter */
			Evens++;
		/* read next number */
		scanf("%d",&Number);
	}
	/* print results */
	printf("Even numbers: %d\n",Evens);
	printf("Odd numbers: %d\n",Odds);
	return 0;
}
