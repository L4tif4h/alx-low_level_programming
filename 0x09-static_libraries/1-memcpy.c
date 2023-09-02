#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: pointer to the destination memory area
 * @src: memory where it's copied
 * @n: n° of bytes
 *
 * Return: Pointer to the destination memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
