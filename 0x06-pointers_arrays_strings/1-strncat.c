#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concactenates to strings
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the number
 *
 * Return: A pointer to the result of concatenation of @dest and @src
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
