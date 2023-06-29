#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int start = 0;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcLen] != '\0')
	{
		srcLen++;
	}


	while (start < srcLen)
	{
		dest[destLen + start] = src[start];
		start++;
	}

	dest[destLen + srcLen] = '\0';

	return (dest);
}
