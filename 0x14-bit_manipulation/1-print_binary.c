#include "main.h"

/**
**Prints the binary representation of a number - print_binary
**The number to be printed in binary : @n
**/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
