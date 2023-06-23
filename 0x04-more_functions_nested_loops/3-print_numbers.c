#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		_putchar('0' + start);
		start++;
	}
	_putchar(10);
}
