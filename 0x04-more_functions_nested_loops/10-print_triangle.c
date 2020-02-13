#include "holberton.h"

/**
 * print_triangle - draws a triangle
 * @size: integer to be used
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int T;
		int S;

		for (T = 1; T <= size; T++)
		{
			for (S = T; S < size; S++)
			{
				_putchar(' ');
			}
			for (S = 1; S <= T; S++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
