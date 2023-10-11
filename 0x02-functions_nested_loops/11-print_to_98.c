#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from @n to 98
 *
 * @n: number to be checked
 *
 * Return: Always void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i != 98; i > 98 ? i-- : i++)
	{
		if (i >= 0 && i <= 9)
			_putchar(i + '0');
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (i < 0)
		{
			_putchar('-');
			_putchar((-i) + '0');
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}
