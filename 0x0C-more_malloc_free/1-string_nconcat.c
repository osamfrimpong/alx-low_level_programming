#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: size of bytes to copyfrom second string
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s2 == NULL)
		s2 = "";

	unsigned int lens1 = strlen(s1);
	unsigned int lens2 = strlen(s2);
	unsigned int lenToUse = n >= lens2 ? lens2 : n;
	char *concString = malloc(lens1+lenToUse+1);

	if (concString == NULL)
		return (NULL);
	int start = 0;

	while(*s1)
	{
		concString[start] = *s1++;
		start++;
	}

	while(lenToUse > 0)
	{
		concString[start] = *s2++;
		start++,lenToUse--;
	}

	concString[start + 1] = '\0';

	return (concString);


}
