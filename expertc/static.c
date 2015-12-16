#include <stdio.h>

void generate_initializer(char * string)
{
	static char separator = ' ';
	printf( "%c %s \n", separator, string);
	separator = ',';
}

int main()
{
	char arr[] = "prasanna";
	generate_initializer(arr);
	generate_initializer(arr);
	generate_initializer(arr);
	generate_initializer(arr);
	return 0;
}
