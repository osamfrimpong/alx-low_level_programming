#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: size to copy
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int start = 0;

	while (start < n)
	{
		dest[start] = src[start];
		start++;
	}

	return (dest);
}
