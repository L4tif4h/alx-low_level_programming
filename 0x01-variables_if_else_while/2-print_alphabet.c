#include <stdio.h>
/**
 * main - Entry point of the program
 *  main - Prints the alphabet
 *  Return: 0 (success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
