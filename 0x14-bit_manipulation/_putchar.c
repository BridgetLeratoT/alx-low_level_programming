#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character c to stdout
 * @c: it is the character to print
 *
 * Return:  success 1 is returned.
 *  error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

