#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	char *string;
	va_list arguments;

	va_start(arguments, n);

	while (counter < n)
	{
		string = va_arg(arguments, char *);

		printf("%s", string  == NULL ? "(nil)" : string);
		if (counter < (n - 1) && separator != NULL)
			printf("%s", separator);

		counter++;
	}

	va_end(arguments);

	putchar('\n');
}
