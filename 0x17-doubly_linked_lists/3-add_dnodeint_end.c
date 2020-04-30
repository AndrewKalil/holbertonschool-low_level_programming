#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginneing of the list
 * @head: pointer to a pointer to the head
 * @n: int variable containing data to be stored
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		new->n = n;
		new->prev = h;
		h->next = new;
		new->next = NULL;
	}

	return (new);
}
