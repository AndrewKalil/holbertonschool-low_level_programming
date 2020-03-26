#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints from decimal to binary
 * @n: number being inputted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar((n & 1) + 48);
}
