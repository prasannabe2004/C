#include <stdio.h>
#include <stdlib.h>

#define call(x) #x
#define def(y,x) y##x
int main()
{
    printf("%s\n",call(c/c++));

    int i1=100;
    int i2=200;

    printf("%d",def(i,2));

    return 0;
}
