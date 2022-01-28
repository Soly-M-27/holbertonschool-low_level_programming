#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = 0, total_size;
	hash_node_t *added_node = malloc(sizeof(hash_node_t));
	char *empty = "";

	if (added_node == NULL)
		return (0);

	if (key == empty || key == NULL || value == NULL || ht == NULL)
		return (0);

	total_size = ht->size;
	added_node->key = strdup(key);
	added_node->value = strdup(value);

	for (; x < total_size; x++)
	{
		if (ht->array[x] == NULL)
			added_node->next = NULL;
		else
			added_node = ht->array[x];
	}

	ht->array[x] = added_node;

	return (1);
}
