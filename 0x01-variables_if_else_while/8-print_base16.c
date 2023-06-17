#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int start = 0;

	while (start < 16)
	{
		if (start < 10)
		{
			putchar('0' +  start);
		}
		else
		{
			putchar('a' + (start - 10));
		}
		start++;
	}

	putchar('\n');

	return (0);
}
