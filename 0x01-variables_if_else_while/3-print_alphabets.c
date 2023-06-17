#include <stdio.h>

/**
 * main - Entry Point
 * a program that prints the alphabet
 * in lowercase, and then in uppercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char startLowerCase = 'a';
	char startUpperCase = 'A';

	while (startLowerCase <= 'z')
	{
		putchar(startLowerCase);
		startLowerCase++;
	}

	while (startUpperCase <= 'Z')
	{
		putchar(startUpperCase);
		startUpperCase++;
	}

	putchar('\n');

	return (0);
}
