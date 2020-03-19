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
 * add_node - adds new nodes to the head
 * @head: pointer to head of list
 * @str: string being inputted
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);

	newHead->str = strdup(str);
	newHead->len = _strlen(str);
	newHead->next = *head;
	*head = newHead;

	return (*head);
}
