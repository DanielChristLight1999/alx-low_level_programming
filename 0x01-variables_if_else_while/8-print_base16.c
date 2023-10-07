#include <stdio.h>

/**
 * main - Entry to this program
 *
 * This program prints all the base sixteen characters
 * in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	char number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
