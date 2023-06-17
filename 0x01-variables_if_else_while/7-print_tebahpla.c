#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}

	putchar('\n');

	return (0);
}
