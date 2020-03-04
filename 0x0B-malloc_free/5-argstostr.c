#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: counter for arguements
 * @av: array of arguements
 * Return: pointer to new string (success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, a, len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	
	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	a = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[a] = av[i][j];
			a++;
		}
		ptr[a] = '\n';
		a++;
	}

	return (ptr);
}
