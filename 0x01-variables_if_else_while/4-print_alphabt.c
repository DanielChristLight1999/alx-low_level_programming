#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all the lowercase letters
 * with some exceptions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++
	}

	putchar('\n');

	return (0);
}
