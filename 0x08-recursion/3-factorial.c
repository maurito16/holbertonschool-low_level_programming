#include "holberton.h"
/**
 * factorial - factorial of a number
 * @n: number to calculates factorial
 *
 * Description: num to calculate factorial
 * Recursion
 * Return: factorial of a number
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
return (0);
}
