#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Sqrt of a natural
 * @s: sqrt of a natural
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int _strlen(char *s);
int _loop(char *s, int length);
/**
 * is_palindrome- Sqrt of a natural
 * @s: sqrt of a natural
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int is_palindrome(char *s)
{
	return (_loop(s, _strlen(s)));
}

/**
 * _strlen - Sqrt of a natural
 * @s: sqrt of a natural
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	else
		return (0);
}
/**
 * _loop - Sqrt of a natural
 * @s: sqrt of a natural
 * @length: length
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int _loop(char *s, int length)
{
	if (length <= 1)
		return (1);
	if (s[0] == s[length - 1])
	{
		length -= 2;
		return (_loop(s + 1, length));
	}
	else
		return (0);
}
