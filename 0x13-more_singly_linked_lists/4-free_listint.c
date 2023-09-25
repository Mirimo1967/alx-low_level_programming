#include "lists.h"

/**
 * free_listint - Deallocates memory used by a linked list.
 * @head: Pointer to the first element of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
