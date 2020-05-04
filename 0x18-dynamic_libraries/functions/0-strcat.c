#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @src: variable containing string to be concatenated
 * @dest: variable containing string to be concatenated to
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

	int dest_c = 0;
	int src_c = 0;

	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}

	while (src[src_c] != '\0')
	{
		dest[dest_c] = src[src_c];
		src_c++;
		dest_c++;
	}

	dest[dest_c] = '\0';

	return (dest);
}
