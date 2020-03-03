#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a
 * parameter.
 * @str: pointer containing string to be duplicated
 * Return: pointer to the copied string (success), NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != 0)
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while ((ptr[j] = str[j]) != '\0')
		j++;

	return (ptr);
}
