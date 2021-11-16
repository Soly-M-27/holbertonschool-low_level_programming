#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: Head of the list
 *
 * Return: if the list is empty, return (0)
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
