#include <string.h>

/**
 * _memcpy - copies memory area
 *
 * @n: number of bytes
 * @src: the source
 * @dest: the destination
 *
 * Return: A memory pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
