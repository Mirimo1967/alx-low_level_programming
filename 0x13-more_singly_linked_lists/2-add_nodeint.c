#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @h: Pointer to the first node in the list
 * @n: Data to insert in that new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *h;
	*h = new;

	return (new);
}
