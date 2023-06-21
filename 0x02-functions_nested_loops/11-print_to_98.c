#include "main.h"
/**
 *print_to_98 - print numbers to 98
 *@n: character to be verified
 *Return: returns void
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar('0' + n);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar(10);
}
