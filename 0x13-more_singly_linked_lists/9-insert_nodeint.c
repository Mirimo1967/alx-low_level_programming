#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list,
 * at a given position
 * @h: A pointer to the first node in the list
 * @idx: An index where the new node is added
 * @n: Data to insert in the new node
 *
 * Return: A pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *h;

	new = malloc(sizeof(listint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		else
			current = current->next;
	}

	return (NULL);
}
