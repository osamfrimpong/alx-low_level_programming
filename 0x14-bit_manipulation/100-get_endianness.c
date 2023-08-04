#include "main.h"

/**
 * get_endianness - check the endian status
 * Return: 1 if big 0 if little
 */
int get_endianness(void)
{
	int comparator = 1;
	char *c = (char *)(&comparator);

	return (*c);
}
