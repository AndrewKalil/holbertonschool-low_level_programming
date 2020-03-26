#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing binary
 * Return: returns converted number of 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		else if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec = dec << 1;
		i++;
	}

	return (dec);
}
