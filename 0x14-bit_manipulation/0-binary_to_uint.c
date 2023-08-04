#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	long unsigned int index = 0;
	unsigned int decimal_val = 0;

	if (b == NULL)
		return (0);

	while (index < strlen(b))
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[index] - '0');
		index++;
	}

	return (decimal_val);
}
