#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	va_list arguments;

	va_start(arguments, n);

	while (counter < n)
	{
		printf("%d", va_arg(arguments, int));
		if (counter < (n - 1) && separator != NULL)
			printf("%s", separator);

		counter++;
	}

	va_end(arguments);

	putchar('\n');
}
