#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: The string to be checked
 *
 * Return: Always void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0')
		{
			_putchar(str[i]);
			break;
		}
		else
			_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
