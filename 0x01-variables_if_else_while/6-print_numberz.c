#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar('0' +  start);
		start++;
	}

	putchar('\n');

	return (0);
}
