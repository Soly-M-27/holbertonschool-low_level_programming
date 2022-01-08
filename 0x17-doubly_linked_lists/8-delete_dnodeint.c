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
	dlistint_t *current = (dlistint_t *)malloc(sizeof(dlistint_t));
	unsigned int i;
	unsigned int zero = 0;

	if (*head == NULL || index < zero)
		return (-1);

	current = *head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);
	else
	{
	if (*head == current)
		*head = (*head)->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	}
	return (1);
}
