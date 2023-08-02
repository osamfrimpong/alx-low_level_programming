#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes as size_t
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
