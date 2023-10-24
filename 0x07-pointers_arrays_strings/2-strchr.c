#include <string.h>

/**
 * _strchr -  locates a character in a string.
 *
 * @s: string parameter
 * @c: character to be located
 *
 * Return: the first occurence of the character @c
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
