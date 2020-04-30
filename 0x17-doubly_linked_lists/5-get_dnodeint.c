#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the head
 * @index: position of node to be returned
 * Return: pointer to the node to be returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
