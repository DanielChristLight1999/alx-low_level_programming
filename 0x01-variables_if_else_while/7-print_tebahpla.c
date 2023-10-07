#include <stdio.h>

/**
 * main - Entry point to this program
 *
 * This program prints the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
