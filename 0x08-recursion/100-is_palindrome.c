#include "main.h"

int check_palindrome(char *s, int start, int end);
int calculate_length(char *s);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, 0, calculate_length(s)));
}
/**
 * check_palindrome - Checks the characters recursively for a palindrome.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
