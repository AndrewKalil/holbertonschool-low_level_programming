#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function as a parameter on each element
 * of an array
 * @array: array containing elements
 * @size: size of elements
 * @action: function given as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
