#include "lists.h"

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}

/**
 * add_node_end - adds new nodes to the end of list
 * @head: pointer to head of list
 * @str: string being inputted
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newTail;
	list_t *tmp;

	newTail = malloc(sizeof(list_t));
	if (newTail == NULL)
		return (NULL);

	newTail->str = strdup(str);
	if (newTail == NULL)
	{
		free(new);
		return (NULL);
	}
	newTail->len = _strlen(str);
	newTail->next = NULL;

	if (*head == NULL)
	{
		*head = newTail;
		return (newTail);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newTail;
	return (newTail);
}
