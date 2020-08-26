#include "search_algos.h"

/**
 * print_array - prints the array
 * @array: pointer to the first element of the array
 * @lo: first element
 * @hi: last element
 */
void print_array(int *array, int lo, int hi)
{
	int i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		if (i == lo)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * search - searches for a number
 * @array: pointer to first element of list
 * @lo: lowest number in array
 * @hi: highest number in array
 * @value: number in search
 * Retrun: index of value found
 */
int search(int *array, int lo, int hi, int value)
{
	int mid = (lo + hi) / 2;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);
	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (search(array, lo, mid-1, value));
	else
		return (search(array, mid+1, hi, value));
}

/**
 * binary_search - searches for a number in a sorted array
 * @array: pointer to the first element of the list
 * @size: size of the array
 * @value: number being searched for
 * Return: the index of the number in query or -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	int lo = 0;
	int hi = (int) size;

	if (size == 0 || !array)
		return (-1);

	return (search(array, lo, hi-1, value));
}
