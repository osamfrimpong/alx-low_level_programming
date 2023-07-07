#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for programme
 * @argc: argument count
 * @argv: pointer to array of strings passed as arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}
