#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: number to be checked
 *
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	return (last_digit);
}
