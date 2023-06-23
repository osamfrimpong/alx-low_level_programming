#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * excluding 2 and 4, followed by a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		if (start != 2 && start != 4)
			_putchar('0' + start);
		start++;
	}
	_putchar(10);
}
