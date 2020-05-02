#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where node is to be inserted
 * @n: int number to be inserted to the node
 * Return: address of the new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = *h, *node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
			return (NULL);
	}
	if (ptr != NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		ptr->next->prev = node;
		node->next = ptr;
		node->prev = ptr->next;
		ptr->next = node;
		return (node);
	}
	else if (idx == i)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}
	return (NULL);
}
