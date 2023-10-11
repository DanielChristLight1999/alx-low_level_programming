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
	int fib1 = 1;
	int fib2 = 2;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		int currentfib = fib1 + fib2;

		if (i < 50)
			printf(", %d", currentfib);
		else
			printf(", %d\n", currentfib);

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
