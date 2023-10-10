#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
