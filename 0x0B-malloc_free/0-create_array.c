#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 *
 * @size: size parameter
 * @c: the initializer parameter
 *
 * Return: NULL if @size is 0, a pointer to the array or Null if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
