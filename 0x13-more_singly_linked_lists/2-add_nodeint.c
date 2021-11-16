#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a listint_t list
 * @h: Head of the list
 * @n: Captures the numbers
 *
 * Return: Address of the new element, or NULL
 * if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNum;

	newNum = malloc(sizeof(struct listint_s));

	if (newNum == NULL)
		return (NULL);

	newNum->n = n;
	newNum->next = *head;

	*head = newNum;

	return (newNum);
}
