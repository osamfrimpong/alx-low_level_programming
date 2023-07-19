#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter = 0;

	if (action == NULL || array == NULL)
		return;
	while (counter < size)
	{
		action(array[counter]);
		counter++;
	}
}
