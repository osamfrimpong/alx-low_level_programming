#include <stdio.h>

/**
 * main - entry point for programme
 * @argc: argument count
 * @argv: pointer to array of strings passed as arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
