#include "holberton.h"
#include <stdio.h>
/**
 * loop - Sqrt of a natural
 * @n: sqrt of a natural
 * @i: seed
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int loop(int n, int i);
/**
 * is_prime_number - Sqrt of a natural
 * @n: sqrt of a natural
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int is_prime_number(int n)
{
if (n == 1 || n < 0)
	return (0);
else if (loop(n, 2) == n && n > 0)
	return (1);
else
	return (0);
}

/**
 * loop - Sqrt of a natural
 * @n: sqrt of a natural
 * @i: seed
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int loop(int n, int i)
{
	if (n % i != 0)
	{
		i++;
		return (loop(n, i));
	}
	else
	{
		return (i);
	}
}
