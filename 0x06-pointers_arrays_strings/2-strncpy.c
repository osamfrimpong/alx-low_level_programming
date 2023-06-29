#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string to be copied
 * @n: number of characters to copy
 * Return: pointer to destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int start = 0;

	while (start < n && src[start] != '\0')
	{
		dest[start] = src[start];

		start++;
	}

	while (start < n)
	{
		dest[start] = '\0';
		start++;
	}

	return (dest);
}
