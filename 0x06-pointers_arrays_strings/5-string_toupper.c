#include "main.h"
/**
 * string_toupper - Converts string to uppercase
 *
 * @str - The string to be converted
 *
 * Return: The converted string @str
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
