#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - prints number of elements in a linked list
 * @h: pointer to head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
