#include "main.h"

/**
* _strstr - Locates a substring.
* @haystack: Pointer to the string in which to search for the substring.
* @needle: Pointer to the substring to locate.
*
* Return: Pointer to the beginning of the located substring in @haystack,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
