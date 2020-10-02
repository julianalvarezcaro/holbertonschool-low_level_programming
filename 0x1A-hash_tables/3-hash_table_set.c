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
	hash_node_t **array, *new, *node, *check;
	char *cp_value, *cp_key;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_value);
		return (0);
	}
	cp_key = strdup(key);
	if (cp_key == NULL)
	{
		free(new);
		free(cp_value);
		return (0);
	}
	array = ht->array;
	if (array[idx])
	{
		check = check_keys(array[idx], cp_key);
		if (check != NULL)
			return (update_key(check, cp_value, new));
		node = array[idx];
		new->next = node;
		new->value = cp_value;
		new->key = cp_key;
		array[idx] = new;
		return (1);
	}
	new->key = cp_key;
	new->value = cp_value;
	new->next = NULL;
	array[idx] = new;
	return (1);
}

/**
 * check_keys - used to check if the key already existis in the linked list
 *
 * @head: pointer to the first element of the linked list
 * @key: Key we are checking if already exists
 *
 * Return: pointer to the node that has the same key. NULL if not found
 */
hash_node_t *check_keys(hash_node_t *head, char *key)
{
	hash_node_t *curr = head;

	while (curr)
	{
		if (!strcmp(curr->key, key))
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}


/**
 * update_key - updates a key with the given value
 *
 * @check: pointer to the key to be updated
 * @cp_value: new value that the node must have
 * @new: previously allocated memory that is not needed anymore
 *
 * Return: 1 always
 */
int update_key(hash_node_t *check, char *cp_value, hash_node_t *new)
{
	free(new);
	free(check->value);
	check->value = cp_value;
	return (1);
}
