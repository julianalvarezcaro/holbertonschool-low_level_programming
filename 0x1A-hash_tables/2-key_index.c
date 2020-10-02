#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: given key
 * @size: size of array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
