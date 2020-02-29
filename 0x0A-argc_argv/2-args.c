#include "holberton.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: alays 0
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc > 1)
	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
