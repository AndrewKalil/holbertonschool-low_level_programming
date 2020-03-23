#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
