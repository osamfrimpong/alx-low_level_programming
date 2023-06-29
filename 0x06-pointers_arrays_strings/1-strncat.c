#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (srcLen < n && src[srcLen] != '\0')
	{
		dest[destLen + srcLen] = src[srcLen];
		srcLen++;
	}

	if (srcLen < n)
	{
		dest[destLen + srcLen] = '\0';
	}

	return (dest);
}
