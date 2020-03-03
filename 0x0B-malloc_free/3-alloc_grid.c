#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to alocated memory of array containing dimensional
 * array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
	free(ptr);
}
