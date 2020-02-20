#include "holberton.h"

/**
 * swap_int - Swap two integeres
 * @a: Integer
 * @b: Integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: varable to be used
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int pos;

	pos = 0;
	while (pos < n / 2)
	{
		swap_int(a + pos, a + n - pos - 1);
		pos++;
	}
}
