#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *tmp = *head;

		if (head == NULL)
			return;

		*head = tmp->next;

		free(tmp);
	}
}
