#include <stdio.h>

int main()
{
    // Here the "Prasanna" is not stored in ROM
    char arr[] = "Prasanna";
    char arr1[] = "Prasanna";

    // Here the "Prasanna" is stored in ROM. So cannot be changed
    char *arr = "Prasanna";
    char *arr1 = "Prasanna";
    
    
    arr[0] = 'p';


    printf("%s %s \n", arr,arr1);
    return 0;
}

