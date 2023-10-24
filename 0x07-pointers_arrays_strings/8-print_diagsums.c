#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix.
  *
  *
  * @a: The matrix parameter
  *
  * @size: The size of array
  *
  * Return: Always void
  */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sumL = 0;
	int sumR = 0;

	for (i = size - 1; i <= (size * size) - size; i += (size - 1))
	{
		sumR += a[i];
	}
	for (j = 0; j < (size * size); j += (size + 1))
	{
		sumL += a[j];
	}
	printf("%d, %d\n", sumL, sumR);
}
