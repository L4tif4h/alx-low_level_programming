#include "main.h"
/**
 * _rev - prints a string, in reverse, followed by a new line
 * @s: dtring
 * return: 0
 */
void print_rev(char *s)
{

	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
