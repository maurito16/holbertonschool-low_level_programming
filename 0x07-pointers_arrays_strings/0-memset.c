#include "holberton.h"
#include <stdio.h>
/**
 * _memset  - Takes a pointer to an int
 * @s: string
 * @b: byte to insert
 * @n: size in bytes
 *
 * Description: Appends two strings
 * Appends Two Strings
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0 ; j < n; j++)
{
	s[j] = b;
}
return (s);
}
