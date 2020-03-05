#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: contains old memory block
 * @old_size: contains old size
 * @new_size: contains new size
 * Return: a pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	optr = ptr;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	i = 0;
	while (new_size > old_size && i < old_size)
	{
		nptr[i] = optr[i];
		i++;
	}
	while (new_size < old_size && i < new_size)
	{
		nptr[i] = optr[i];
		i++;
	}

	free(ptr);
	return (nptr);
}
