#include "lists.h"

/**
 * sum_dlistint - sums all data in the elements of a list
 * @head: pointer to the head
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0, i = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
		i++;
	}
	return (sum);
}
