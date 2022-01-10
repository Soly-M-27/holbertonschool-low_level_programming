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
	if (*h == NULL || idx < x)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	tmp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = newNode;
		else
		{
			newNode->next = *h;
			tmp->next = newNode;
			*h = newNode;
		}
		return (newNode);
	}
	while (tmp->next != NULL || x < idx - 1)
	{
		if (x == idx - 1)
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
