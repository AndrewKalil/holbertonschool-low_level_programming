#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * @array: pointer to the first value in the array
 * @size: size of the array
 * @value: value being searched
 * Return: the number being searched or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = 0;

	if (size == 0 || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
		return (i);
	else
		return (-1);
}
