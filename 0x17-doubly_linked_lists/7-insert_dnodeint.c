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
	unsigned int i;
	dlistint_t *ptr = *h, *node;

	if (h == NULL || *h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	while (ptr != NULL && i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	node->n = n;
	node->next = ptr->next;
	ptr->next->prev = node;
	node->prev = ptr;
	ptr->next = node;

	return (node);
}
