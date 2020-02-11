#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar ('\n');
}
