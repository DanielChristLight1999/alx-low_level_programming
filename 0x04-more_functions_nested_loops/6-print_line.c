#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - This function prints a straight line
 *
 * @n: number of times to print _
 *
 * Return: Always void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
