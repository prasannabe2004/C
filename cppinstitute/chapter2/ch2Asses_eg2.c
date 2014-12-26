 #include <stdio.h>

int main(void) 
{
    int i,j,k;
   
    i = 3;
    j = -3;
    k = (i >= i) + (j <= j) + (i == j) + (i > j);

    printf("Value of k is %d\n",k);
}
