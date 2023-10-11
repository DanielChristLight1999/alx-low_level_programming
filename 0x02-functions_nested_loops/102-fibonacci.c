#include <stdio.h>
#include "main.h"

/**
 * main -  The entry point of this program
 *
 * This program prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success);
 */

int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long i;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		unsigned long currentfib = fib1 + fib2;

		if (i < 50)
			printf(", %lu", currentfib);
		else
			printf(", %lu\n", currentfib);

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
