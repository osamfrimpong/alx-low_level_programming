#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line. But for multiples
 * of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both
 * three and five print FizzBuzz
 * Return: void
 */


int main(void)
{
	int start = 1;

	while (start <= 100)
	{
		if (start % 3 == 0 && start % 5 != 0)
			printf(" Fizz");
		else if (start % 5 == 0 && start % 3 != 0)
			printf(" Buzz");
		else if (start % 3 == 0 && start % 5 == 0)
			printf(" FizzBuzz");
		else if (start == 1)
			printf("%d", start);
		else
			printf(" %d", start);
		start++;
	}

	printf("\n");

	return (0);
}
