#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of the program
 * Description: Prints the alphabet except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24 ; i++)
	{
		putchar(alphabet[i]);
	}
	putvhar('\n');
	return (0);
}
