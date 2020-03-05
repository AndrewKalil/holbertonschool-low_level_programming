#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints a range integers from min to max
 * @min: minimum number where range should start
 * @max: maximum number where range should stop
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
