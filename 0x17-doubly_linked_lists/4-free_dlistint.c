#include "lists.h"

/**
 * free_dlistint - adds a node at the beginneing of the list
 * @head: pointer to a pointer to the head
 * Return: pointer to the new node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	h = head;
	while (head != NULL)
	{
		head = head->next;
		free(h);
		h = head;
	}
	free(head);
}
