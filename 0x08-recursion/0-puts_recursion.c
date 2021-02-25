#include "holberton.h"
/**
 * _puts_recursion  - Puts Recursion
 * @s: char
 *
 * Description: Puts Recursion
 * Recursion
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
