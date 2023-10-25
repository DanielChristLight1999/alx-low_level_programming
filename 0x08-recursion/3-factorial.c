#include <stdio.h>

/**
 * factorial - Returns the factorial of a number
 *
 * @n: the number to be evaluated
 *
 * Return: the factiorial of @n
 */

int factorial(int n)
{
	int a;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	a = n * factorial(n - 1);
	return (a);
}
