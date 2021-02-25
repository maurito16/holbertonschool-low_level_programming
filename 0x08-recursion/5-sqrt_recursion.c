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
 * _sqrt_recursion - Sqrt of a natural
 * @n: sqrt of a natural
 *
 * Description: power with recursion
 * Recursion
 * Return: power of a number
*/
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
	return (n);
return (loop(n, 1));
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
	if ((i * i)  == n)
		return (i);
	else if (i * i > n)
		return (-1);

		i++;
		return (loop(n, i));


}
