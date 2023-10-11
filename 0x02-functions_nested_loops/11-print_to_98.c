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

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i >= 0 && i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(9 + '0');
	_putchar(8 + '0');

	_putchar('\n');
}
