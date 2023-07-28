#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the list_t list
 * Return: number of elements in h as size_t
 */

size_t list_len(const list_t *h)
{
	size_t length  = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
