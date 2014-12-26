#include <stdio.h>

struct STR {
	int	Int;
	char	Char;
};

void funx(struct STR *p) {
	p -> Int = 2;
	p -> Char = 'B';
}

int main(void) {
	struct STR str = { 1, 'A' };

	funx(&str);
	printf("%d %c", str.Int, str.Char);
	return 0;
}