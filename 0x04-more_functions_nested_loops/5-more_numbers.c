#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int start = 0;
	int timesStart = 1;

	while (timesStart <= 10)
	{
		while (start <= 14)
		{
			if (start >= 10)
				_putchar('0' + start / 10);
			_putchar('0' + start % 10);
			start++;
		}
		_putchar(10);
		timesStart++;
		start = 0;
	}
	_putchar(10);
}
