#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;

		free(tmp);
	}
}
