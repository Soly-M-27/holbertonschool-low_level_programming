#include "lists.h"

/**
 * free_dlistint - Function that frees a
 * doubly linked list
 * @head: head of the list
 *
 * Return: type void. No return needed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		dlistint_t *next = node->next;
		free(node);
		node = next;
	}
}
