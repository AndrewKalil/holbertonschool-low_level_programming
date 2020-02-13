#include "holberton.h"

/**
 * print_most_numbers - prints most number followd by a new line
 */
void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
		if (num != 50 && num != 52)
		{
			_putchar (num);
		}
	_putchar ('\n');
}
