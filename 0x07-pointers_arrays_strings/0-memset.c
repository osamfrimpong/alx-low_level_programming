#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to be used for filling
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int start = 0;

	while (start < n)
	{
		s[start] = b;
		start++;
	}

	return (s);
}
