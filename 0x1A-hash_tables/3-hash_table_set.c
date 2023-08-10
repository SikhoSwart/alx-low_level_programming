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
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		current = ht->array[idx];
		if (strcmp(current->key, key) == 0)
		{
			new->next = current->next;
			ht->array[idx] = new;
			free(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
		{ current = current->next;
		}
		if (strcmp(current->key, key) == 0)
		{
			new->next = current->next->next;
			free(current->next);
			current->next = new;
		}
		else
		{
			new->next = ht->array[idx];
			ht->array[idx] = new;
		}
	}
	return (1);
}
