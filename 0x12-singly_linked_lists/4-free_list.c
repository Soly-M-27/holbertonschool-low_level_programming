#include "lists.h"

/**
 * free_list - Function that fress a list_t list
 * @head: Holds address of elements
 *
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head->next;

		free(head->str);
		free(head);
		head = tmp;
	}
}
