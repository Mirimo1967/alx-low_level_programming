#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @h: A pointer to the first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *h)
{
	int sum = 0;
	listint_t *current = h;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
