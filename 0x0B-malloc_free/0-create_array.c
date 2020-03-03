#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: contains the max size to be used
 * @c: variable containing the string
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';

	return (ptr);
	free(ptr);
}
