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
	unsigned int i = 1;
	dlistint_t *ptr = *h, *node;

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	node->n = n;
	node->next = ptr->next;
	node->prev = ptr;
	if (ptr != NULL)
	{
		ptr->next->prev = node;
		ptr->next = node;
	}

	return (node);
}
