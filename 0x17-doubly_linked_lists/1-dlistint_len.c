#include "lists.h"

/**
 * dlistint_len - iterates throught the list and returns the number of nodes
 * @h: pointer to the head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
