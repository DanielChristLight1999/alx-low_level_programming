#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - Function prints numbers
 *
 * Return - Always void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
