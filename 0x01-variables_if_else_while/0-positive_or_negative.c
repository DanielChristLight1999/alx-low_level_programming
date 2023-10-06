#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * This program generates a random number,
 *  calculates whether the number is
 * positive, zero, or negative, 
 * and prints the correct message.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");
	return (0);
}
