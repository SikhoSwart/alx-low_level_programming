#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i, j;

	i = 0;
	if (!ht)
	{
		return;
	}
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			nd = ht->array[j];
			while (nd != NULL)
			{
				if (i > 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				i++;
			}
		}
	}
	printf("}\n");
}
