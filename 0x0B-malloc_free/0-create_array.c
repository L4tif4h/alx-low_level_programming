#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters.
 * @size: The size of the array.
 * @c: The character to initialize.
 *
 * Return: returns a pointer or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
