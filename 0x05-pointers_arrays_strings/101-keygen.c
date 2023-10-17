#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point of program
 *
 * This program generates random keys
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);

		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
