#include <math.h>

/**
 * _pow_recursion - Returns the power of a number
 *
 * @x: the base value whose power is tobe calculated
 * @y: The power value
 *
 * Return: The power of @x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (pow(x, y));
}
