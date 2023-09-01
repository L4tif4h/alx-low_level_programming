#include <stdio.h>
/**
 *main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments as strings
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
