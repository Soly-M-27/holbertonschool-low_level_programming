#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 *
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *key = malloc(sizeof(hash_table_t));
	unsigned long int x = 0;

	if (key == NULL)
		return (NULL);

	key->array = malloc(sizeof(hash_table_t *) * size);
	key->size = size;

	if (key->array == NULL)
		return (NULL);

	for (; x < size; x++)
		key->array[x] = NULL;

	return(key);
}
