#include "holberton.h"

/**
 * clear_bit - sets a bit to 0 at a given position
 * @n: pointer to value in main
 * @index: position
 * Return: 1 for succes -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
