#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the table
 * @key: key to be inserted
 * @value: value to be inserte
 * Return: 1 for success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *bucket = malloc(sizeof(hash_node_t)), *ptr = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	if (bucket == NULL)
		return (0);

	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	bucket->key = strdup(key);
	if (bucket->key == NULL)
	{
		free(bucket);
		return (0);
	}
	bucket->value = strdup(value);
	if (bucket->value == NULL)
	{
		free(bucket->key);
		free(bucket);
		return (0);
	}
	bucket->next = ht->array[idx];
	ht->array[idx] = bucket;
	return (1);
}
