#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;
		int j = 0;

		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	_putchar('\n');

}
