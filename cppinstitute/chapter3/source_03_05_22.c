#include <stdio.h>

int main(void) {
	int Signed = -8, VarS;
	unsigned Unsigned = 6, VarU;
	Signed >>= 1; /* division by 2 */
	Unsigned <<= 1; /* multiplication by 2 */
	
	printf("signed %d\n",Signed);
	printf("signed %u\n",Unsigned);
	return 0;
}
