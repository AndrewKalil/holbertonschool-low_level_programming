#include "holberton.h"

/**
 * get_bit - returns the value of a bit at the position indicated by
 * position at indicated by the index
 * @n: number to be scaned
 * @index: index of the bit
 * Return: value of bit (1 or 0)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
