#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: destination of string copied
 * @src: source of string to be copied
 * @n: number of characters to be copied
 *
 * Return: The copied string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
