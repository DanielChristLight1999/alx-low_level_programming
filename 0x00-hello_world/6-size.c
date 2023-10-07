#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * This program prints the sizes of types on the system
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	#ifdef __x86_64__
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	#else
	printf("Size of long double: %lu byte(s)\n", sizeof(long double));
	#endif

	return (0);
}
