#include "main.h"

/**
 * jack_bauer - prints all time in 24 hours
 * Return: void
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar(10);
			minute++;
		}
		hour++;
	}
}
