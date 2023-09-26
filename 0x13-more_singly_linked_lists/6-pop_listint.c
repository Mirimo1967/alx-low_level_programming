#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @h: A pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **h)
{
	listint_t *current;

	int node count;


	if (!head || !*h)
		return (0);

	node count = (*h)->n;

	current = (*h)->next;
	free(*h);
	*h = current;

	return (node count);
}
