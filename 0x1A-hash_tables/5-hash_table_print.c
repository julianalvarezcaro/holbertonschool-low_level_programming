nclude "hash_tables.h"

/**
 * hash_table_print - prints all the elements of a hash table
 *
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int loop;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (loop = 0; loop < ht->size; loop++)
	{
		node = ht->array[loop];
		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}

