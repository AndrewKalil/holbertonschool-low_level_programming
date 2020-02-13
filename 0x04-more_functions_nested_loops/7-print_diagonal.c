#include "holberton.h"

/**
 * print_diagonal - prints diagonal lines as many times
 * is input as the number that
 * @n: integer to be used
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (a == b)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
