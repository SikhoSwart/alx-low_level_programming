#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				nd = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = nd;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
