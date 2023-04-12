#include "main.h"

#include <unistd.h>

/**
**_putchar - writes the character c to stdout
*
**The character to print :@c
**On success Return 1.
*
** On error,Return -1 , and errno is set appropriately.
*
**/

int _putchar(char c)

{
	return (write(1, &c, 1));

}
