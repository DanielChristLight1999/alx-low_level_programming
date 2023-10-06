#include <stdio.h>
/**
 * main - Entry point of the program
 * This program uses putchar to print
 * all the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
