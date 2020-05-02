#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: pointer to pointer to the head
 * @index: position of element to be deleted
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head, *store;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		store = ptr;
		ptr = store->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		free(store);
		*head = ptr;
		return (1);
	}
	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr != NULL)
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
		free(ptr);
		return (1);
	}
	return (-1);
}
