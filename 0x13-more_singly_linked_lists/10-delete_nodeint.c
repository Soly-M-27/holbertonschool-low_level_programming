#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the
 * node at index index of a listint_t linked list
 * @head: Head of the list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *next = tmp->next->next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	free(tmp->next);

	tmp->next = next;
	return (1);
}
