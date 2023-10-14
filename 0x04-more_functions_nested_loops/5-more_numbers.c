#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - This function prints numbers 10 times
 *
 * Return: Always void
 */

void more_numbers(void)
{
	int a, i;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}

		_putchar('\n');
	}

	_putchar('\n');

}
