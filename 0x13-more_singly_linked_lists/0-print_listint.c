#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this prints all elements of the linked list
 * @h: A pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
