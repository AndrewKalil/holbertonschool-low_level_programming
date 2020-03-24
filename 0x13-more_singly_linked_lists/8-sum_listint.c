#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - sums data in nodes
 * @head: pointer to node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *pos;

	pos = head;

	if (head == NULL)
		return (0);

	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		pos = head->next;
		head = pos;
	}
	return (sum);
}
