#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Takes a pointer to an int
 * @s: destination string
 * @accept: source string
 *
 * Description: Appends two strings
 * Appends Two Strings
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
}
return (NULL);
}
