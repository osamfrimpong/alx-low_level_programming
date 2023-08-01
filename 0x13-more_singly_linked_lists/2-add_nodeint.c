#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: poniter to the head of the list
 * @n: integer to add to list
 *
 * Return: NULL if it fails
 *         Otherwise - the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
