#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints lowercase letters
 * then uppercase letters using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char uppercase = 'A';

	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
