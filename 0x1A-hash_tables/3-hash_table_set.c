#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 *
 * @ht: hash table to add the element to
 * @key: given key
 * @value: value to be added
 *
 * Return: 1 in success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *node;
	char *cp_value;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	cp_value = strdup(value);
	new->key = (char *)key;
	new->key = cp_value;
	if ((ht->array)[idx])
	{
		node = (ht->array)[idx];
		new->next = node;
		(ht->array)[idx] = new;
		return (1);
	}
	(ht->array)[idx] = new;
	return (1);
}
