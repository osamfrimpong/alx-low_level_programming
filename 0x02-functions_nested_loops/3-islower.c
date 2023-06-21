#include "main.h"

/**
 * This checks if alphabet is lower case
 * _islower: checks if alphabet is lower
 * @c: input alphabet
 * Return: int
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
