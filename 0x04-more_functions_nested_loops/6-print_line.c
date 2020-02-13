#include "holberton.h"

/**
 * print_line - prints a as many times as the number that
 * is input
 * @n: integer to be used
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int Times;

		for (Times = 1; Times <= n; Times++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
