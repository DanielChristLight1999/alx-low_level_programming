#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table of a number
 *
 * @n: The number ot be multiplied
 *
 * Return: Always void
 */

void print_times_table(int n)
{
	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (column != 0)
					_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
