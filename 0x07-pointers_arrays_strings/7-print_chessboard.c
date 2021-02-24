#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Takes a pointer to an int
 * @a: destination string
 *
 * Description: Appends two strings
 * Appends Two Strings
 * Return: void
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