#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: String to be searched
 * @accept: accept parameter
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
