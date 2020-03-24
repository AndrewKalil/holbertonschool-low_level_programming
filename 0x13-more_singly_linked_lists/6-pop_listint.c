#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer to the head node
 * Return: data that was in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	else
	{
		data = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (data);
}
