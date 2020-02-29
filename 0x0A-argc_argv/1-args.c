#include "holberton.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: alays 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
