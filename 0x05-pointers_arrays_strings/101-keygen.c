#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program
 *
 * This program generates random keys
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int password_length;
	char password[100];

	srand(time(NULL));

	password_length = rand() % 10 + 10;

	for (i = 0; i < password_length; i++)
		password[i] = rand() % 94 + 33;

	password[password_length] = '\0';

	printf("%s\n", password);

	return (0);
}
