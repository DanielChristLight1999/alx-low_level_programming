#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 *
 * @s: string to be reversed
 *
 * Return: Always void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	char temp;

	while (start < length - 1)
	{
		temp = s[start];
		s[start] = s[length - 1];
		s[length - 1] = temp;
		start++;
		length--;
	}
}
