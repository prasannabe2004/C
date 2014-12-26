 #include <stdio.h>

int main(void) 
{
	int i,j,k;
   
    i = 3;
    j = -3;
    k = i * j;
    k += j;
    k /= i;

    printf("%d\n",k);
}
