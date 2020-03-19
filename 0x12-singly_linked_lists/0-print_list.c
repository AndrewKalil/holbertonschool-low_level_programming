#include "lists.h"

/**
 * print_list - prints elements in the list and returns number of
 * elements
 * @h: pointer to struct
 * Return: number of elements in struct
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
