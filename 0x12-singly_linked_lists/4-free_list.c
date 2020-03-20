#include "lists.h"

/**
 * free_list - frees the structure
 * @head: the head of the structure
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
