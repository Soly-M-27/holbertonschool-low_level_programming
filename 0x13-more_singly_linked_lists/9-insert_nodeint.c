#include "lists.h"

/**
 * insert_nodeint_at_index - Functiion that inserts
 * a new node at a given position
 * @head: Head of list
 * @idx: Index being sent by main
 * @n: Number to be placed where the index indictaes
 *
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(struct listint_s));
	listint_t *insert = *head;
	unsigned int x;
	newNode->n = n;

	if (newNode == NULL)
		return (NULL);

	for (x = 1; insert != NULL && x != idx; x++)
	{
		insert = insert->next;
	}

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = insert->next;
		insert->next = newNode;
	}
	return (insert);
}
