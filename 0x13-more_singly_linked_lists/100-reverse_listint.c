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
	listint_t *before;
	listint_t *after;

	before = NULL;
	after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
