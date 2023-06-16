#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		puts("and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		puts("and is 0");
	}
	else if (lastDigit > 0 && lastDigit < 6)
	{
		puts("and is less than 6 and not 0");
	}

	return (0);
}
