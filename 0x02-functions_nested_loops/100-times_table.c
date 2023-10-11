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
