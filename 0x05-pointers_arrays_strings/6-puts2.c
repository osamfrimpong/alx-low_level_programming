#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string to print
 * _strlen - function to get length of string
 * _putchar - function to print character
 * Return: void
 */

void puts2(char *str)
{
	int length = _strlen(str) - 1;



	int i = 0;

	while (i <= length)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}


}
