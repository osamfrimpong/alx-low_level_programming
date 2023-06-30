#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string whose words will be capitalized
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}

		if (str[i] == ' ' || str[i] == 9
				|| str[i] == '\n' || str[i] == ',' || str[i] == ';'
				|| str[i] == '?' || str[i] == '.' || str[i] == '!'
				|| str[i] == '\"' || str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}
