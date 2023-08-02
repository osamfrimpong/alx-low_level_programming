#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a listint_t list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node to search, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
		{
			return current;
		}

		current = current->next;
		counter++;
	}

	return NULL;
}
