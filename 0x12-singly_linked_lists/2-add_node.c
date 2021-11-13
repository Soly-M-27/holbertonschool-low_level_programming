#include "lists.h"

/**
 * add_node - Function that adds a new node at the
 * beginning of a list_t list
 * @head: Head of the list
 * @str: const string sent from main
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int x;
	list_t *newNode;

	newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	newNode->str = strdup(str);
	newNode->len = x;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
