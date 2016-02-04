#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    struct marks{
        uint8_t p:3;
        uint8_t c:3;
        uint8_t m:2;
    };

    struct marks s={7,-7,3};

    printf("%d %d %d\n",s.p,s.c,s.m);

    return 0;
}
