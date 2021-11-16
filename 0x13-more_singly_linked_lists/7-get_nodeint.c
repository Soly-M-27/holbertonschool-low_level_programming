#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of
 * a listint_t linked list.
 * @head: Head of List
 * @index: index
 *
 * Return: If node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	for (; count < index; count++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}
	return (current);
}
