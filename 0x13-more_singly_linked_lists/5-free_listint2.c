#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	if (head == NULL)
		return;

	*head = NULL;
}
