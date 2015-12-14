#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void* p1, void* p2, int size)
{
    char buffer[size];

    memcpy(buffer,p1,size);
    memcpy(p1,p2,size);
    memcpy(p2,buffer,size);

}
int main()
{
    printf("Hello world!\n");

    unsigned int a = 0xffffff00;
    unsigned short b=0xff;

    printf("%u %u\n", a, b);
    swap(&a,&b,sizeof(b));

    printf("%u %u\n", a, b);


    char* h = strdup("Fred1234");
    char* w = strdup("Wilma1234");

    swap(h,w,sizeof(char*));

    printf("%s %s\n",h,w);
    return 0;
}
