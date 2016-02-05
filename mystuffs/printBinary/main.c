#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printBinary(int16_t n)
{
    int16_t a = n;
    int16_t i = 0;

    for (i=15;i>=0;i--)
        printf("%s",(a)&(0x1<<i)?"1":"0");

    printf("\n");
}
int main()
{
    int16_t number = -10;

    printBinary(number);
    number = number>>3;
    printBinary(number);

    return 0;
}
