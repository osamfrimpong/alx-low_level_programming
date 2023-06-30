#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '0' + 4;
		}
		else  if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '0' + 3;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '0' + 7;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '0' + 1;
		}
		i++;
	}
	return (str);
}
