#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of
 * a dlistint_t list.
 * @h: head of the list
 *
 * Return: The number of nodes if any
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
