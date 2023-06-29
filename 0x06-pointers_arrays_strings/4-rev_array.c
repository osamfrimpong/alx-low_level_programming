#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
