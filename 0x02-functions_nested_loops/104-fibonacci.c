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
	double fib1 = 1.0;
	double fib2 = 2.0;
	int i;

	printf("%.0lf, %.0lf", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		double currentfib = fib1 + fib2;

		if (i < 98)
			printf(", %.0lf", currentfib);
		else
			printf(", %.0lf\n", currentfib);

		fib1 = fib2;
		fib2 = currentfib;
	}

	return (0);
}
