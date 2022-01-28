#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated
 * with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element, or NULL if key coudn't
 * be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id;
	char *result, *empty = "";
	hash_node_t *checker;

	if (ht == NULL || key == empty)
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);

	checker = ht->array[id];

	while (checker != NULL)
	{
		if (strcmp(key, checker->key) == 0)
			result = checker->value;

		checker = checker->next;
	}

	return (result);
}
