#include <string.h>

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: the pointer
 * @b: the contant byte
 * @n: number of bytes
 *
 * Return: A pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
