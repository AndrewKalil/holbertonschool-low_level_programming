#include "hash_tables.h"

/**
 * key_index - to find the index of the key in hash table
 * @key: the key to be value
 * @size: size of table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
