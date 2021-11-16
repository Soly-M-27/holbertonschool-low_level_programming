#include "lists.h"

/**
 * listint_len - Function that returns the number of
 * elements in a linked listint_t list
 * @h: Head of the list
 *
 * Return: Number of elements in a linked listint_t
 * list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *n;
	size_t x = 0;

	n = h;

	while (n != NULL)
	{
		n = n->next;
		x++;
	}
	return (x);
}
