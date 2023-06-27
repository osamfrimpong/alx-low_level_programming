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
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
