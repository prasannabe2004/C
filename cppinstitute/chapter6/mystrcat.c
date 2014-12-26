#include <stdio.h>


char *mystrcat(char *destination, char *source) {
    char *res;
    
	printf("dst=%p src=%p\n", destination,source);
	
    for(res = destination; *destination++; );
    
    printf("dst=%p res=%p\n",destination,res);
    
    --destination; 
    printf("Copying %c\n", *source);
    while(*destination++ = *source++) 
	{
		printf("dst=%p src=%p\n", destination,source);
		printf("Copying %c\n", *source);
    }
    return res;
}

int main()
{
	char src[10] = "prasanna",dst[20]="pm";
	
	printf("%s\n",mystrcat(dst,src));
	return 0;
}
