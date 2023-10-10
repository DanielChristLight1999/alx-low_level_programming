#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of this program
 *
 * This program prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while(letter < 'z')
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');

	return (0);
}
