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
	if (!(n > 15 || n < 0))
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = column * row;

				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product >= 100)
					print_number(product);
				else if (product >= 10)
				{
					_putchar(' ');
					print_number(product);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					print_number(product);
				}
			}
			_putchar('\n');
		}
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
