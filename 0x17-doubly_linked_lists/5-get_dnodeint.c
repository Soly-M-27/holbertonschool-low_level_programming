#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a dlistint_t linked list.
 * @head: head of the list
 * @index: index to be added
 *
 * Return: if the node does not exist, return NULL
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
