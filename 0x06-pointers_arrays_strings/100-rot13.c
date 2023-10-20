#include "main.h"

/**
 * rot13 - encodes string to Rot13
 *
 * @s: points to string params
 *
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int j, i;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rotdata[j];
				break;
			}
		}
	}

	return (s);
}
