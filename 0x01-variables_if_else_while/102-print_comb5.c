#include <stdio.h>

/**
 * main -  Entry point of this program
 *
 * This program prints combination of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f_ones, f_tens, s_ones, s_tens;

	for (f_tens = 0; f_tens <= 9; f_tens++)
	{
		for (f_ones = 0; f_ones <= 9; f_ones++)
		{
			for (s_tens = f_tens; s_tens <= 9; s_tens++)
			{
				for (s_ones = (f_tens == s_tens) ? (f_ones + 1) : 0; s_ones <= 9; s_ones++)
				{
					putchar(f_tens + '0');
					putchar(f_ones + '0');
					putchar(' ');
					putchar(s_tens + '0');
					putchar(s_ones + '0');

					if (!(f_tens == 9 && f_ones == 8 && s_tens == 9 && s_ones == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
