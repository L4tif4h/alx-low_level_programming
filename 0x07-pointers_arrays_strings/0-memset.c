#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: n° of bytes to be changed
 * @s: starting adress of memory to be filled
 * @b: the desired value
 *
 * Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;
        for (i = 0; n > 0; i++, n--)
        {
                s[i] = b;
        }
        return s;
}
