#include <string.h>

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: string to be duplicated.
 *
 * Return: pointer to duplicate of @str.
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
