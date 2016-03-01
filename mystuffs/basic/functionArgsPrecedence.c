#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    printf("%d %d %d\n", c+b+a, (b = b*2), (c = c*2));
    return 0;
}

