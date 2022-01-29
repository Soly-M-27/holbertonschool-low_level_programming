#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *mover;

	if (ht == NULL)
		return;

	for (; x <= ht->size; x++)
	{
		mover = ht->array[x];
		while (mover != NULL)
		{
			free(mover->key);
			free(mover->value);
			free(mover);
			mover = mover->next;
		}
	}
	free(ht->array);
	free(ht);
}
