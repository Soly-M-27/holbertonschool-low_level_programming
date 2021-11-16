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
	int n = (*head)->n;
	listint_t *tmp;

	if (n == (*head)->n)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			if (current->next->n == n)
			{
				tmp = current->next;
				current->next = current->next->next;
				free(tmp);
				break;
			}
			else
				current = current->next;
		}
	}
	return (n);
}
