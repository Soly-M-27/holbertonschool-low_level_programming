#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * of a listint_t linked list, and returns the head
 * node's data (n).
 * @head: Head of the list
 *
 * Return: Return linked list or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	if (*head != NULL)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (n);
}
