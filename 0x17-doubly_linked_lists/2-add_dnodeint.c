#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: start of list
 * @n: data to be sent to the list
 *
 * Return: The address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = (*head);
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
