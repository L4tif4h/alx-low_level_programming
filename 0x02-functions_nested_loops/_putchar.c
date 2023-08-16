#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c : the character to print
 *
 * Return : On success, 1 is returned. On error, -1 is returned.
 * On error, -1 is returned, and errno is set appropriately
 */
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}
