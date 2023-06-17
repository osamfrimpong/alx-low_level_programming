#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char start = 'a';
	char e = 'e';
	char q = 'q';

	while (start <= 'z')
	{
		if (start != q && start != e)
			putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
