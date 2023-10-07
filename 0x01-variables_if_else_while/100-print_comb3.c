#include <stdio.h>

/**
 * main - Entry point for this program
 *
 * This program prints combination of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (!(tens == 8 && ones == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}