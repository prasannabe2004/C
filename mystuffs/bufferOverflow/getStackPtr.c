// echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
#include <stdio.h>
int main() 
{
	register int i asm("esp");
	printf("$esp = %#010x\n", i);
}
