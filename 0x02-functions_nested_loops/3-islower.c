#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point to this program
 *
 * This program checks if the input is lowercase
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else {
		return (0);
	}
}
