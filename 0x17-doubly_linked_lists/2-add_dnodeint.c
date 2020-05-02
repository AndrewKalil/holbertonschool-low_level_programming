#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginneing of the list
 * @head: pointer to a pointer to the head
 * @n: int variable containing data to be stored
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
