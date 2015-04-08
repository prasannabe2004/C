#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int i = 10;

    size_t size = sizeof(i++);

    printf("%u %d\n", (unsigned int)size, i);

    return 0;

}
