#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints the n elements of an array or ints
 *
 * @a: array to be used
 * @n: number of elements
 *
 * Return: Always void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
