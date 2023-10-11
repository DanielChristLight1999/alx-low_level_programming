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
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	int i;

	printf("%u, %u", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		unsigned int currentfib = fib1 + fib2;

		if (i < 98)
			printf(", %u", currentfib);
		else
			printf(", %u\n", currentfib);

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
