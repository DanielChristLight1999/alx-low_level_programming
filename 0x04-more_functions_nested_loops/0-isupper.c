#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - This function checks for uppercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if @c is uppercase 0 if not.
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
