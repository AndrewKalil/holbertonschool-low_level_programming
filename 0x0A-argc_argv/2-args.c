#include "holberton.h"
#include <stdio.h>

/**
 * main - prints arguments of a program
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: alays 0
 */
int main(int argc, char *argv[])
{
	int c;

	{
		for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	}
	return (0);
}
