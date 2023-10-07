#include <stdio.h>

/**
 * main - Entry point to this program
 *
 * This program prints all possible combinations
 * of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');

		if(number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}

	putchar('\n');

	return (0);
}
