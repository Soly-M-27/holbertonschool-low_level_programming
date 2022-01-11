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
	unsigned int x = 0;
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (newNode == NULL)
		return (NULL);

	tmp = *h;
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		if (*h == NULL)
			*h = newNode;
		else
		{
			newNode->next = *h;
			tmp->prev = newNode;
			*h = newNode;
		}
		return (newNode);
	}
	while (tmp->next != NULL || x + 1 == idx)
	{
		if (x + 1 == idx)
		{
			if (tmp->next != NULL)
				tmp->next->prev = newNode;
			newNode->next = tmp->next;
			tmp->next = newNode;
			newNode->prev = tmp;
			return (newNode);
		}
		tmp = tmp->next;
		x++;
	}
	free_dlistint(newNode);
	return (NULL);
}
