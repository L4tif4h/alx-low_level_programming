#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The input string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
