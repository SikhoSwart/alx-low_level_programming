#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *now;
	unsigned long int idx;

	if (!key)
	{
		return (NULL);
	}
	if (!ht)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	now = ht->array[idx];
	if (!now)
	{
		return (NULL);
	}
	while (strcmp(now->key, key) && now != NULL)
	{
		now = now->next;
	}
	if (now == NULL)
	{
		return (NULL);
	}
	else
	{
		return (now->value);
	}
}
