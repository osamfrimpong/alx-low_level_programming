#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of items to add
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter = 0;
	int sum = 0;
	va_list arguments;


	if (n == 0)
		return (0);

	va_start(arguments, n);

	while (counter < n)
	{
		sum += va_arg(arguments, int);
		counter++;
	}

	va_end(arguments);

	return (sum);
}
