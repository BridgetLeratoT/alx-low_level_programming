#include "main.h"

/**
** get_bit - Gets the value of a bit at a given index - get_bit
** @n - The bit : @n
** @index - The index to get the value at - indices start at 0 :@index
**
**If an error occurs -Return -1 should be Returned
**Otherwise  The value of bit at index.
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);

}
