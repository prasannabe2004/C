#include <stdio.h>

int main()
{
    unsigned int i = 0x11223344;

    char* ptr = (char*)&i;

    printf("%x\n", *ptr);
    if((*ptr) == 0x44)
    {
        printf("Little endian\n");
    }
    else
    {
        printf("Big endian\n");
    }

    return 0;
}
