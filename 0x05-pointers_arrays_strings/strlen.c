#include "main.h"

/**
 * _strlen - swaps the values of two integers
 * @s: string to count
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
