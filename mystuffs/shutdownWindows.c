#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
               char st;
          clrscr();
          printf(" Are you sure to shutdown your computer. Please mention(y/n)");
          scanf("%c",&st);

          if(st=='y' || st=='Y')
              {
           system("c:\\windows\\system32\\shutdown /s");
           system("pause");
          }
 return(0);
}
