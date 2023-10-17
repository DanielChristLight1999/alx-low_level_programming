#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - This function prints a string in reverse
 *
 * @s: String to be reversed
 *
 * Return: Always void
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
