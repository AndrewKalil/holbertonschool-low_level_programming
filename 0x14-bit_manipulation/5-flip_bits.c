#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: numer to be flipped
 * @m: number to be flipped into
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int flip;

	flip = n ^ m;
	while (flip)
	{
		if ((flip & 1) == 1)
			i++;
		flip = flip >> 1;
	}
	return (i);
}
