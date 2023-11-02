#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * @a: First integer
 * @b: second integer
 *
 * Description: This function prints the product of two numbers
 *
 * Return: 0 if success. 1 if fail.
 */

int main(int a, int b)
{
	int sum;

	if (!(a || b))
	{
		printf("Error\n");

		return (1);
	}

	sum = a * b;

	printf("%d\n", sum);
	return (0);
}
