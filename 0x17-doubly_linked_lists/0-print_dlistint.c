#include "lists.h"

/**
 * print_dlistint - prints elements in a list and returns number of elemenets
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *ptr = *h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
