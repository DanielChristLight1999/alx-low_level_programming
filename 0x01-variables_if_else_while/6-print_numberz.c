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
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
