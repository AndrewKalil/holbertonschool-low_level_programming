#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_node_at_index - returns nth node of the list
 * @head: pointer to node
 * @index: number of node identifier
 * Return: pointer to node position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *pos;

	pos = head;

	if (head == NULL)
		return (0);
	else
	{
		for (i = 0; i < index; i++)
		{
			if (head == NULL)
				return (NULL);
			else
			{
				pos = head->next;
				head = pos;
			}
		}
	}
	return (pos);
}
