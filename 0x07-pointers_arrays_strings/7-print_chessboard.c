#include "main.h"
/**
* _strstr - Locates a substring.
* @haystack: Pointer to the string in which to search for the substring.
* @needle: Pointer to the substring to locate.
*
* Return: Pointer to the beginning of the located substring in @haystack,
*         or NULL if the substring is not found.
*/
void print_chessboard(char (*a)[8])
{
        int i, j;

        for (i = 0; i < 8; i++)
        {
                for (j = 0; j < 8; j++)
                {
                        _putchar(a[i][j]);
                }
                _putchar('\n');
        }
}
