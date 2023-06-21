#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input number
 * Return: int
 */

int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (lastDigit < 0)
		lastDigit *= -1;
	return (lastDigit);
}
