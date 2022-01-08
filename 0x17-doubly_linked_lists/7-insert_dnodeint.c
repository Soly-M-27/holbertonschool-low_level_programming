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
		return NULL;

	newNode->n = n;

	if (*h == NULL)
	{
		newNode->next = NULL;
		*h = newNode;
		newNode->prev = *h;
	}
	else
	{
		tmp = *h;
		while (x < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			x++;
		}
		
		if (tmp != NULL)
		{
			newNode->next = tmp->next;
			newNode->prev = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = newNode;
		}
		tmp->next = newNode;
	}
	return (newNode);
}
