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
	for (int i = 0; i <= 10; i++)
	{
		for (int a = 0; a <= 14; a++)
			_putchar(a + '0');
		_putchar('\n');
	}

}
