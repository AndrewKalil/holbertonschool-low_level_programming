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
		int XD;
		int XS;

		for (XD = 0; XD <= n; XD++)
		{
			for (XS = 0; XS < n; XS++)
			{
				if (XS == XD)
					_putchar(92);
				else if (XS < XD)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
