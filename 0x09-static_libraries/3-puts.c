#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * _puts - it puts the character string
 * @str: the parameter string input
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

