#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list
 * @head: head of list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *tmp;
	unsigned int i;
	unsigned int zero = 0;

	if (*head == NULL || index < zero)
	{
		free(current);
		return (-1);
	}

	tmp = *head;

	if (index == zero)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		if ((tmp == NULL) || (tmp->next == NULL))
			return (-1);
		tmp = tmp->next;
	}

	current = tmp->next->next;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = current;
	return (1);
}
