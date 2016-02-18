#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main()
{
    printf("Hello world!\n");

    FILE* fp;
    char buffer[256];

    fp = fopen("C:/Users/pmohanasundaram/Documents/GitHub/C/mystuffs/GetIPFromFile/ip.txt", "r");

    if(!fp)
    {
        perror("fopen:");
        exit(EXIT_FAILURE);
    }

    printf("File open successfull\n");

    if(NULL == fgets(buffer,256,fp))
    {
        perror("fgets:");
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    printf("read = %s", buffer);

    struct in_addr s;

    s = inet_aton(buffer);
    printf("reverse = %c.%c.%c.%c\n",s[3],s[2],s[1],s[0]);

    fclose(fp);

    return EXIT_SUCCESS;
}
