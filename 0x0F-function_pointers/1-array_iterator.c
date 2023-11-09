#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function  parameter on each element of an array
 *
 * @array: The array for iteration
 * @size: the size of the array
 * @action: the pointer to the funcion
 *
 * Return: void;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
