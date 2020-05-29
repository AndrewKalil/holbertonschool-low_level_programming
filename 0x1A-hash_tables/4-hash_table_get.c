#include "hash_tables.h"

/**
 * hash_table_get - get value of hash table
 * @ht: pointer to the table
 * @key: key used to search value
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *ptr;

	if (ht == NULL || key == NULL)
		return (NULL);
	ptr = ht->array[idx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
