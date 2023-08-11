#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key. value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		current = ht->array[idx];
		while (current)
		{
			if (!strcmp(key, current->key))
			{
				free(current->value);
				current->value = strdup(value);
				if (!current->value)
					return (0);
				return (1);
			}
			current = current->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
