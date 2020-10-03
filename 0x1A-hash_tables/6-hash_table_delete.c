#include "hash_tables.h"

/**
 * hash_table_delete - frees allocated memory for a hash table
 *
 * @ht: hash table to be free'd
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *next, **array;
	unsigned long int size, loop;

	if (ht == NULL)
		return;
	size = ht->size;
	array = ht->array;
	for (loop = 0; loop < size; loop++)
	{
		curr = array[loop];
		while (curr)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
	}
	free(ht->array);
	free(ht);
}
