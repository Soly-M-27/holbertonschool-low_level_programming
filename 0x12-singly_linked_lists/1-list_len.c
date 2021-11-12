#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list.
 * @h: Holds list
 *
 * Return: Number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	const list_t *s;
	size_t x = 0;

	s = h;

	while (s != NULL)
	{
		s = s->next;
		x++;
	}

	return (x);
}
