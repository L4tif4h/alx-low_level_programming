#include "main.h"

/**
* _strpbrk -  Searches a string for any of a set of bytes
* @s: Pointer to the string to search in
* @accept: Pointer to the string containing bytes to search for *
* Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] == '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++
	}
	return (0);
