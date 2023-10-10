#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point of this program
 *
 * This program prints the alphabets ten times
 *
 * Return: Always void (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);

			letter++;
		}

		_putchar('\n');
	}
}
