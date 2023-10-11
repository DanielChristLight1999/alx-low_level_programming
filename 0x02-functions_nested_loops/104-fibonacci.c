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
	int fib1 = 1;
	int fib2 = 2;
	int i;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		int currentfib = fib1 + fib2;

		if (i < 98)
			printf(", %d", currentfib);
		else
			printf(", %d\n", currentfib);
		if (i % 10 == 0)
			printf("\n");

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
