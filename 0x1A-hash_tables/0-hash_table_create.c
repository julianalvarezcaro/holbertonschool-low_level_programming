#include "hash_tables.h"

/**
 * hash_table_create - creastes a hash table of @size size
 *
 * @size: size of the table to be created
 *
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *node;
	hash_node_t *new;
	unsigned long int loop;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = NULL;
	new = NULL;
	for (loop = 0; loop < size; loop++)
	{
		node = new;
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		{
			free_table(table);
			return (NULL);
		}
		new->next = NULL;
		if (loop == 0)
			table->array = &new;
		else
			node->next = new;
	}
	table->size = size;
	return (table);
}

/**
 * free_table - function used to free a hash table
 *
 * @table: table to be freed
 *
 * Return: void
 */
void free_table(hash_table_t *table)
{
	hash_node_t *prev;
	hash_node_t *node;

	if (table->array == NULL || *(table->array) == NULL)
	{
		free(table);
		return;
	}
	node = *(table->array);
	while (node->next)
	{
		prev = node;
		node = node->next;
		free(prev);
	}
	free(node);
	free(table);
}
