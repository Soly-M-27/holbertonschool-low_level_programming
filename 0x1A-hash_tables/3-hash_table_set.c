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
	unsigned long int x;
	char *empty = "";
	hash_node_t *added_node;
	char *copy_value, *copy_key;

	added_node = malloc(sizeof(hash_node_t));

	if (added_node == NULL)
		return (0);
	if (key == empty || key == NULL || value == NULL ||
			ht == NULL)
		return (0);
	copy_value = strdup(value);
	if (copy_value == NULL)
	{
		free(added_node);
		return (0);
	}
	copy_key = strdup(key);
	if (copy_key == NULL)
	{
		free(added_node);
		free(copy_value);
		return (0);
	}
	added_node->key = copy_key;
	added_node->value = copy_value;
	x = key_index((const unsigned char *)key, ht->size);
	if (ht->array[x] == NULL)
		added_node->next = NULL;
	else
		added_node->next = ht->array[x];
	ht->array[x] = added_node;
	/*hash_table_print((const hash_table_t *)ht);*/
	return (1);
}
