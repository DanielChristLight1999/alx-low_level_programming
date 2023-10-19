#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Converts string to uppercase
 *
 * @str - The string to be converted
 *
 * Return: The converted string @str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
