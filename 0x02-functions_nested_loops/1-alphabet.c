#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point of this program
 *
 * This program prints the alphabet in lowercase followed by a new line
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');
}
