#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list
 * @head: start of list
 * @n: data to be sent to the list
 *
 * Return: The address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		(*head) = newNode;
		return (newNode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	newNode->prev = last;

	return (newNode);
}
