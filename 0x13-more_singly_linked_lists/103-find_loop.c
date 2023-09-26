#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint_t linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chameleon = head;
	listint_t *lion = head;

	if (!head)
		return (NULL);

	while (chameleon && lion && lion->next)
	{
		lion = lion->next->next;
		chameleon = chameleon->next;
		if (lion == chameleon)
		{
			chameleon = head;
			while (chameleon != lion)
			{
				chameleon = chameleon->next;
				lion = lion->next;
			}
			return (lion);
		}
	}

	return (NULL);
}
