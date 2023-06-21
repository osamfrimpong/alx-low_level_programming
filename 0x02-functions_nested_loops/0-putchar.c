#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * Prints the text "_putchar"
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int length = strlen(text);
	int i = 0;

	while (i < length)
	{
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
