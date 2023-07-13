#include "main.h"

/**
 * malloc_checked - allocates memeory using malloc
 * @b: size of memory in bytes to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
