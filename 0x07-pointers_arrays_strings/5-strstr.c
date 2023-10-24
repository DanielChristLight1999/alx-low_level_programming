#include <string.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: string to be checked
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
