#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: A pointer to the new allocated space which contains the
 * contents of s1 followed by the contents of s2. Null on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len, len1;
	char *ptr;

	len = 0;
	len1 = 0;
	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	ptr = malloc(sizeof(char) * (len + len1 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;
	if (s1)
	{
		while (i < len)
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len + len1))
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
