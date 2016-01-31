#include <stdio.h>
#include <stdlib.h>
void print_usage(char* argc)
{
	printf("%s help\n",argc);
}
int main(int argc, char **argv)
{
	int c = 0;
	extern char *optarg;

	while (-1 != (c = getopt (argc, argv, "s:x:i:f:hr")))
	{
		switch (c)
		{
			case 'i':
				printf("Option '%c' selected with argument %s\n",c,optarg);
				break;
			case 'f':
				printf("Option '%c' selected with argument %s\n",c,optarg);
				break;
			case 'x':
				printf("Option '%c' selected with argument %s\n",c,optarg);
				break;
			case 's':
				printf("Option '%c' selected with argument %s\n",c,optarg);
				break;
			case 't':
				printf("Option '%c' selected with argument %s\n",c,optarg);
				break;
			case 'r':
				printf("Option '%c' selected with argument \n",c);
				break;
			default:
			case 'h':
				print_usage (argv[0]);
				exit (EXIT_SUCCESS);
				break;
		}
	}
}
