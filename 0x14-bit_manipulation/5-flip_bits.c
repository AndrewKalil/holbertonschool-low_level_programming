#include "holberton.h"

/**
 * int flip_bits -
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int flip;

	flip = n ^ m;
	while (flip)
	{
		if ((flip & 1) == 1)
			index++;
		flip = flip >> 1;
	}
	return (index);
}
