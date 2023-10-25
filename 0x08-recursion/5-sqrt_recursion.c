#include "main.h"

int the_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the square root of a number
 *
 * @n: number to find the square root
 *
 * Return: the resulting square of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recursion(n, 0));
}

/**
 * the_sqrt_recursion - recurses to find the square root of a number
 *
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int the_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (the_sqrt_recursion(n, i + 1));
}
