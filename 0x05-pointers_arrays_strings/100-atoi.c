#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: Converted @s integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > (INT_MAX - (s[i] - '0')) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (result != 0)
			break;
	}

	return (result * sign);
}
