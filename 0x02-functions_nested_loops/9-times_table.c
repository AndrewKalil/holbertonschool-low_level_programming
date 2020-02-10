#include "holberton.h"

/**
 *times_table - prints the 9 times table, starting on 0
 */
void times_table(void)
{
	int a;
	int k;
	int o;

	for (a = 0; a < 10; a++)
	{
		for (k = 0; k < 10; k++)
		{
			o = k * a;
			if (k == 0)
			{
				_putchar(o + '0');
			}
			if (o < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
