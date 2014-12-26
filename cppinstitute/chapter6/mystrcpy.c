#include <stdio.h>


char *mystrcpy(char *destination, char *source) {
    char *res;

    for(res = destination; *destination++ = *source++; )
		printf("Copying %c\n", *source);;
    return res;
}

int main()
{
	char src[10] = "prasanna",dst[10];
	
	printf("%s\n",mystrcpy(dst,src));
	return 0;
}
