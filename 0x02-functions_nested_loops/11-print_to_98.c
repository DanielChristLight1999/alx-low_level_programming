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
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar(9 + '0');
	_putchar(8 + '0');

	_putchar('\n');
}

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
		putchar('-');
		print_number(-n);
	}
}
