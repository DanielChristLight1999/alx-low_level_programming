#include <stdio.h>

/**
 * swap_int - This function swaps the value of teo integers
 *
 * @a: Integer to be swapped
 * @b: integer to be swapped
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = *a;
	*a = temp;
}
