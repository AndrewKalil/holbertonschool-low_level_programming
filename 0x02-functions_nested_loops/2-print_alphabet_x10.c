#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)

{
	char alph;
	int x10;

	for (x10 = 0; x10 < 10; x10++)

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar ('\n');
}
