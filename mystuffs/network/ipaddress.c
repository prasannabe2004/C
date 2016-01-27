#include <stdio.h>

int main()
{
char ip[]="0a4f8001";
char ipfmt[16];

printf("%hu %hu %hu %hu\n",ip[0],ip[1],ip[2],ip[3]);
sprintf(ipfmt,"%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);

printf("ip format=%s\n",ipfmt);
return 0;
}
