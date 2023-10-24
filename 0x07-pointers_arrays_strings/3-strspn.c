#include <string.h>

/**
 * _strspn - ets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: accept parameter
 *
 * Return: The number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
