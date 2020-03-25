#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: pointer to pointer to node
 * Return: a pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = (*head);

	while (after != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;

		if (after != NULL)
			*head = after;
	}
	before = NULL;

	return (*head);
}
