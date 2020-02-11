#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers up to 98
 * @n: the number from which the count starts
 * Return: always 0
 */
void print_to_98(int n)
{
	int a;
	int k;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}

	}
	else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
}
