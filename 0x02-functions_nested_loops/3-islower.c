#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point to this program
 * @c - parameter for character to be checked
 *
 * This program checks if the input is lowercase
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
