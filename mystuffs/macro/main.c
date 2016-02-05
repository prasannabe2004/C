#include <stdio.h>
#include <stdlib.h>

#define call(x) #x
#define def(y,x) y##x
#define c(x) #x

auto int i =0 ;

int main()
{
    printf("%s\n",call(c/c++));

    int i2=200;

    printf("%d",def(i,2));

    printf("%s", c(prasanna));

    return 0;
}
