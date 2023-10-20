#include "main.h"
/**
 * print_number - The prints numbers using putchar.
 *
 * @n: number to be printed.
 *
 * This program takes a number and prints as characters.
 *
 * Return:Always void
 */

void print_number(int n)
{
	if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
}
