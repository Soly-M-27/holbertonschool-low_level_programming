#include "lists.h"

/**
 * add_node_end - Function that adds a new node at
 * the end of a list_t list.
 * @head: Containst the adress
 * @str: Contains string
 *
 * Return: Address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int x;
	list_t *newNode = malloc(sizeof(struct list_s));
	list_t *lastNode = *head;

	if (newNode == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	newNode->str = strdup(str);
	newNode->len = x;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;

	return (newNode);
}
