#include <stdio.h>

void printArr(int* a)
{
    int i =0;

    for (i=0;i<52;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    unsigned int arr[52];

    int i = 0, index = 0, temp = 0;

    srandom(time(0));

    for(i=0;i<52;i++)
    {
        arr[i] = i+1;
    }
    printArr(arr);

    for(i=0;i<52;i++)
    {
        index = rand()%52;
        temp = arr[i];
        arr[i] =  arr[index];
        arr[index] = temp;
    }
    printArr(arr);
    return 0;
}
