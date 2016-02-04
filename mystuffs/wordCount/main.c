#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t countWords(const char* fileName)
{
    char buffer;
    uint32_t  count = 1;
    FILE* fp;

    fp = fopen(fileName, "r");
    if(NULL == fp)
    {
        printf("file open error\n");
        exit(EXIT_FAILURE);
    }

    while(!feof(fp))
    {
        buffer = fgetc(fp);
        if(buffer == '\t'||buffer == ' '||buffer == '\n')
        {
            count++;
        }
    }

    fclose(fp);
    return count;
}
int main()
{
    uint32_t words = 0;
    words = countWords("C:/Users/pmohanasundaram/Documents/GitHub/C/mystuffs/wordCount/sam.txt");
    printf("words = %u \n",words);
    return EXIT_SUCCESS;
}
