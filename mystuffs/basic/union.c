#include <stdio.h>
#include <string.h>

int main() {
	typedef union {
		int a;
		char b[10];
		float c;
	}Union;
	Union x,y = {100};
	x.a = 50;
	strcpy(x.b,"abcde");
	x.c = 21.50;

	//printf("%c\n", (char)x.a);
	printf("%x\n", ((char*)(&(y.a)))[1]);
	printf("%c\n",100);
	printf("%d\n",0);
	printf("%d\n",'\0');
	printf("Union x : %d %s %f n\n",x.a,x.b,x.c);
	printf("Union y : %d %s %f n\n",y.a,y.b,y.c);
}
