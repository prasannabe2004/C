 #include <stdio.h>

int main(void) 
{
	int i,j,k;
	i = 4;
    j = 5;
    k = i-- * ++j;
    printf("%d\n",k);
}
