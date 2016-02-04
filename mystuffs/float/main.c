#include <stdio.h>
#include <stdlib.h>

/*
1bit - sign
7bits - exponent
24bits - mantisa
|1|7|8|8|8|

|0|00000101|
*/

int main()
{
    int i;
    float a=5.2;
    char *ptr;
    ptr=(char *)&a;

    for(i=0;i<=3;i++)
        printf("%d ",*ptr++);

    return 0;
}
