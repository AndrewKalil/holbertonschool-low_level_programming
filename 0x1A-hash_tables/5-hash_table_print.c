#include "hash_tables.h"

/**
 * hash_table_print - prints the table with keys and values
 * @ht: pounter to the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int print_next = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (print_next == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			print_next = 1;
			ht->array[i] = (ht->array[i])->next;
		}
	}
	printf("}\n");
}
