#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This program uses putchar to print numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number = '0';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	return (0);
}
