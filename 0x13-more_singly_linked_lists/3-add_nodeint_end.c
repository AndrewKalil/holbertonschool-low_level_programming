#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to first node
 * @n: int data being added to node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newTail;
	listint_t *tmp = *head;

	newTail = malloc(sizeof(listint_t));
	if (newTail == NULL)
		return (NULL);

	newTail->n = n;
	newTail->next = NULL;

	if (*head == NULL)
	{
		*head = newTail;
		return (newTail);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newTail;

	return (newTail);
}
