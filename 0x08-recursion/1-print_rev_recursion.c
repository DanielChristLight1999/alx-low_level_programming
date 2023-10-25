#include <stdio.h>

/**
  * _print_rev_recursion - Prints string in reverse
  *
  *
  * @s: String to be reversed
  *
  * Return: Always void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
