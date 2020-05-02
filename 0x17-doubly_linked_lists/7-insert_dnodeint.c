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
	dlistint_t *ptr, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		ptr = add_dnodeint(h, n);
		return (ptr);
	}
	ptr = *h;
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		ptr->prev->next = new;
		new->prev = ptr->prev;
		new->next = ptr;
		ptr->prev = new;
		return (new);
	}
	else if (i == idx)
	{
		ptr = add_dnodeint_end(h, n);
		return (ptr);
	}
	return (NULL);
}
