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
	hash_node_t *aux, *node;
	unsigned long int loop;

	for (loop = 0; loop < ht->size; loop++)
	{
		node = ht->array[loop];
		while (node)
		{
			aux = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = aux;
		}
		free(node);
	}
	free(ht->array);
	free(ht);
}
