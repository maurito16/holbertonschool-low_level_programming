#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Takes a pointer to an int
 * @s: destination string
 * @c: source string
 *
 * Description: Appends two strings
 * Appends Two Strings
 * Return: char
*/
char *_strchr(char *s, char c)
{
while (*s)
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
if (*s == c)
	return (s);
else
	return ('\0');
}

