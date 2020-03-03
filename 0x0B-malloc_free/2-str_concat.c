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
	int i, j, len, a;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	len = (i + j);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	a = 0;
	while (a < i)
	{
		ptr[a] = s1[a];
		a++;
	}
	i = 0;
	while (a <= len)
	{
		ptr[a] = s2[i];
		a++;
		i++;
	}
	return (ptr);
}
