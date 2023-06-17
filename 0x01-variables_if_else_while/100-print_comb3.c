#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y;

	while (x < 9)
	{
		y = x + 1;
		while (y < 10)
		{
			putchar('0' +  x);
			putchar('0' + y);
			if (x < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}
