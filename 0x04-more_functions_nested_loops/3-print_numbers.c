#include "holberton.h"

/**
 * print_numbers - prints number followd by a new line
 */
void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar (num);
	}
	_putchar ('\n');
}
