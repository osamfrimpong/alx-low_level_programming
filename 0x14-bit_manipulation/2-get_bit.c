#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number as unsigned long int
 * @index: The index to get the value at - indices start at 0
 * Return: the value of bit as int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
