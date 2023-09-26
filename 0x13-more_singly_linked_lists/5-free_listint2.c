#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to null
 * @h: A pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **h)
{
	listint_t *current, *next;

	if (h == NULL)
		return;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*h = NULL;

}
