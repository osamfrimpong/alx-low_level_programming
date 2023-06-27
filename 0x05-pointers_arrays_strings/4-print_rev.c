#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * _strlen - function to get length of string
 * Return: void
 */

void print_rev(char *s)
{

	int length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
