#include "holberton.h"

/**
 * print_diagonal - prints diagonal lines as many times
 * is input as the number that
 * @n: integer to be used
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int D;
		int S;

		for (D = 0; D < n; D++)
		{
			for (S = 0; S < n; S++)
			{
				if (S == D)
					_putchar('\\');
				else if (S < D)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
