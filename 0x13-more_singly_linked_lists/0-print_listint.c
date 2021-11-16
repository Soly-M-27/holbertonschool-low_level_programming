#include "lists.h"

/**
 * print_listint - Function that prints all elements of a
 * listint_t list
 * @h: head of list
 *
 * Return: size_t variable as number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *n;
	size_t x = 0;

	n = h;

	while (n != NULL)
	{
		printf("%d\n", n->n);
		n = n->next;
		x++;
	}
	return (x);
}
