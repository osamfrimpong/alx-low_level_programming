#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10x
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char start = 'a';
	int i = 0;

	while (i < 10)
	{
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
		i++;
	}
}
