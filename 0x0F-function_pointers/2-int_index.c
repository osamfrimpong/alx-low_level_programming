#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function for comparison
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;
	int index = -1;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (index);
	}

	else
	{

	while (counter < size)
	{
		if (cmp(array[counter]) == 1)
		{
			index = counter;
			break;
		}
		counter++;
	}

	return (index);
	}
}
