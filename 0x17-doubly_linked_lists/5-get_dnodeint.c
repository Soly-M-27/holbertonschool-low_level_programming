#include "lists.h"

/**
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x = 0;

	while (current != NULL)
	{
		if (x == index)
			return (current);
		x++;
		current = current->next;
	}
	return (current);
}
