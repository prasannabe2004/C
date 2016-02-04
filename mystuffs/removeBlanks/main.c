#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SRCFILENAME "C:/Users/pmohanasundaram/Documents/GitHub/C/mystuffs/removeBlanks/sam.txt"
#define DSTFILENAME "C:/Users/pmohanasundaram/Documents/GitHub/C/mystuffs/removeBlanks/sam1.txt"

void removeBlanks(const char* srcFilename,const char* dstFilename)
{
    char buffer;
    FILE* src;
    src = fopen(srcFilename, "r");
    if(NULL == src)
    {
        printf("File open error\n");
        return EXIT_FAILURE;
    }
    FILE* dst;
    dst = fopen(dstFilename, "w");
    if(NULL == dst)
    {
        printf("File open error\n");
        return EXIT_FAILURE;
    }

    while((buffer = fgetc(src)) != EOF)
    {
        printf("%c",buffer);
        if(buffer != ' ')
            fputc(buffer,dst);
    }
    fclose(src);
    fclose(dst);
    return EXIT_SUCCESS;
}

int main(int argc, char** argv)
{
    if(argc == 3)
    {
        removeBlanks(argv[1],argv[2]);
    }
    else
    {
        removeBlanks(SRCFILENAME,DSTFILENAME);
    }

    return EXIT_SUCCESS;
}

