#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * This program prints the combination of three possible
 * numbers without repition
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int hunds;

	for (ones = 0; ones <= 7; ones++)
	{
		for (tens = ones + 1; tens <= 8; tens++)
		{
			for (hunds = tens + 1; hunds <= 9; hunds++)
			{
				putchar(ones + '0');
				putchar(tens + '0');
				putchar(hunds + '0');

				if (!(ones == 7 && tens == 8 && hunds == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
