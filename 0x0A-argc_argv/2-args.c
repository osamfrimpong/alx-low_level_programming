#include <stdio.h>

/**
 * main - entry point for programme
 * @argc: argument count
 * @argv: pointer to array of strings passed as arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int start = 0;

	while (start < argc)
	{
		puts(argv[start]);
		start++;
	}

	return (0);
}
