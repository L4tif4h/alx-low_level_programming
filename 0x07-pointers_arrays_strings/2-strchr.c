#include "main.h"
/**
 * _strchr -  Locates a character in a string
 * @s: Pointer to the string to search
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of @c in @s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
