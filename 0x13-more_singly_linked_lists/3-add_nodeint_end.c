#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the
 * end of a listint_t list
 * @head: Head of list
 * @n: Number of elemenst in list
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNum = malloc(sizeof(struct listint_s));
	listint_t *lastNum = *head;

	if (newNum == NULL)
		return (NULL);

	newNum->n = n;
	newNum->next = NULL;

	if (*head == NULL)
	{
		*head = newNum;
		return (newNum);
	}

	while (lastNum->next != NULL)
		lastNum = lastNum->next;

	lastNum->next = newNum;

	return (newNum);
}
