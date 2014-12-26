#include <stdio.h>

struct STR {
	int	Int;
	char	Char;
};

void fun(struct STR s) {
	s.Int = 2;
	s.Char = 'B';
}

int main(void) {
	struct STR str = { 1, 'A' };

	fun(str);
	printf("%d %c", str.Int, str.Char);
	return 0;
}