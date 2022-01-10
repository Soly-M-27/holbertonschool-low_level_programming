#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new
 * node at a given position
 * @h: head of list
 * @idx: index to be searched for
 * @n: value to be updated into doubly linked list
 *
 * Return: the adress of the new nose, or NULL if
 * it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 1;
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	tmp = *h;

	while (tmp != NULL && x != idx)
	{
		tmp = tmp->next;
		x++;
	}

	if (idx > x)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
	}
	else
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}

	return (newNode);
}
