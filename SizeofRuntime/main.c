#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    unsigned int size;
    int array[size];
    size_t array_size;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    //int array[size];

    array_size = sizeof array;

    printf("%u \n", (unsigned int)array_size);
    return 0;
}
