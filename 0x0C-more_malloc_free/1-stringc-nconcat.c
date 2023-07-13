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
        unsigned int lens1, lens2, start, lenToUse;
        char *concString;

        if (s2 == NULL)
                s2 = "";

        while (s1[lens1] != '\0')
                lens1++;

        while (s2[lens2] != '\0')
                lens2++;

        lenToUse = n >= lens2 ? lens2 : n;
        concString = malloc(sizeof(char) * (lens1 + lenToUse + 1));

        if (!concString)
                return (NULL);


        while (*s1)
        {
                concString[start] = *s1++;
                start++;
        }

        while (lenToUse > 0)
        {
                concString[start] = *s2++;
                start++, lenToUse--;
        }

        concString[start + 1] = '\0';

        return (concString);
}
