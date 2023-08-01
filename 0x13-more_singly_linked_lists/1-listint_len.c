#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - return the number of elements in a listint_t list
 * @h: pointer to head
 * Return: number of elements as size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		numberOfNodes++;
		h = h->next;
	}


	return (numberOfNodes);
}
