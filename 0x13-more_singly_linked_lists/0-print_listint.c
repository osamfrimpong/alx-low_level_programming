#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes as size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}


	return (numberOfNodes);
}
