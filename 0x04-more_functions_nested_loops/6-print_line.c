#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int start = 1;

		while (start <= n)
		{
			_putchar('_');
			start++;
		}
	}
	_putchar('\n');

}
