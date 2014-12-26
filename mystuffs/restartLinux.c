#include<stdio.h>
#include<stdlib.h>

int main()
{
    char st;
    printf("Are you sure to restart your computer?.Please mention it(y/n):");
    scanf("%c",&st);

    if(st=='y' || st=='Y')
    {
        system("sudo reboot");
    }
    return(0);
}
