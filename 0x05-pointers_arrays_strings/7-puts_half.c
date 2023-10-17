#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: string to be halved
 *
 * Return: Always void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = ((length - 1) / 2) + 1;

	while (str[start] != '\0')
	{
		if (str[start] != '\0')
			_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
