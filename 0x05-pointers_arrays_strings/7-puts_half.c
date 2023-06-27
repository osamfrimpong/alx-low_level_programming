#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * _strlen - function to get length of string
 * _putchar - function to print character
 * Return: void
 */

void puts_half(char *str)
{
	int length = _strlen(str) - 1;

	if (length % 2 != 0)
		length -= 1;

	int half = length / 2;

	while (half <= length)
	{

		_putchar(str[(half + 1)]);
		half++;
	}
}
