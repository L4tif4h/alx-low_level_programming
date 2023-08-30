#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: The input string
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
