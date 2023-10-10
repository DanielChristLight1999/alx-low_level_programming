#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
