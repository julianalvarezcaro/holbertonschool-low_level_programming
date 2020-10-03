#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a hash table given the key
 *
 * @ht: hash table to search on
 * @key: key to be found
 *
 * Return: string value of the key. NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[idx]))
		return (NULL);
	node = ht->array[idx];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
