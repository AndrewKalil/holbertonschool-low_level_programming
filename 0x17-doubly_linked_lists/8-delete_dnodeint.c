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
	dlistint_t *ptr = *head, *del;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		del = ptr;
		ptr = del->next;
		if (ptr == NULL)
			ptr->prev = NULL;
		*head = ptr;
		free(del);
		return (1);
	}
	while (ptr != NULL)
	{
		if (i == index)
		{
			if (ptr->next != NULL)
			{
				del = ptr;
				ptr->next->prev = ptr->prev;
				ptr->prev->next = ptr->next;
			}
			if (ptr->next == NULL)
			{
				del = ptr;
				ptr->prev->next = NULL;
			}
			free(del);
			return(1);
		}
		ptr = ptr->next;
		i++;
	}
	return (1);
}
