#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: = hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int x = 0;
	char *string = "";

	if (ht == NULL)
		return;

	printf("{");
	for (; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			printf("%s'%s': '%s'", string, ht->array[x]->key, ht->array[x]->value);
			string = ", ";
			ht->array[x] = ht->array[x]->next;
		}
	}
	printf("}");
	printf("\n");
}
