#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - This function checks for digits
 *
 * @c: chracter to checked
 *
 * Return: 1 if @c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
