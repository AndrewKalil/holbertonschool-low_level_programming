#include "holberton.h"

/**
 * set_bit - set a bit at a given position
 * @n: pointer to n in main
 * @index: position to set bit
 * Return: -1 if fail 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
