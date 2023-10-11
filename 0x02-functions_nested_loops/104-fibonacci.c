#include <stdio.h>
#include "main.h"

/**
 * main -  Entry point of this program
 *
 * This program prints all the fibonacci numbers up to first 98
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long i;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		double currentfib = fib1 + fib2;

		if (i < 98)
			printf(", %lu", currentfib);
		else
			printf(", %lu\n", currentfib);

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
