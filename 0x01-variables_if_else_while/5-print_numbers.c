#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This program prints all the numbers of base ten
 * from zero to nine
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}
