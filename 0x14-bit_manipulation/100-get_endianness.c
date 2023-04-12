#include "main.h"


/**
** get_endianness - checks if a machine is small or huge endian
** Return: 0 for huge, 1 for small
**/

int get_endianness(void)

{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);

}
