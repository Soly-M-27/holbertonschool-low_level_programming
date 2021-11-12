#include "lists.h"

/**
 * print_list - Function that prints all the elements
 * of a list_t list.
 * @h: list
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t x = 0;
	n = h;
	while (n != NULL)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", n->len ,n->str);
		n = n->next;
		x++;
	}
	return (x);
}
