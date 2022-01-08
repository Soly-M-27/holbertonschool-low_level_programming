#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: Head of list
 *
 * Return: if list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp->next != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	sum += tmp->n;

	return (sum);
}
