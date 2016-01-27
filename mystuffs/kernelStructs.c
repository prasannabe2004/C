#include <stdio.h>

struct e1000_driver {
	const char *name;
	int a;
	int b;
};


int main()
{
	struct e1000_driver e1000 = {
		.name = "prasanna1",
		.a = 1,
		.b = 2
	};

	struct e1000_driver e1001 = {
		"prasanna2",
		3,
		4
	};

	printf("%s %d %d\n", e1000.name, e1000.a, e1000.b);
	printf("%s %d %d\n", e1001.name, e1001.a, e1001.b);
	
	return 0;
}
