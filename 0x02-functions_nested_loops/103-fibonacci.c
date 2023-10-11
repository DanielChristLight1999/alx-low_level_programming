#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of this program
 *
 * This program prints the sum of the even fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long limit = 4000000;
	unsigned long fibsum = 0;
	unsigned long currentfib = fib1 + fib2;

	while (currentfib < limit)
	{
		currentfib = fib1 + fib2;

		if (currentfib % 2 == 0)
			fibsum += currentfib;
		fib1 = fib2;
		fib2 = currentfib;
	}

	printf("%lu\n", (fibsum + 2));

	return (0);
}
