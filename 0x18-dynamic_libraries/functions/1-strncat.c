#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: varibale where final string will be stored
 * @src: variable where string to be added will be stored
 * @n: variable containing the limit of bytes to be used
 * Return: *ptrdes
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_c;
	int src_c;

	dest_c = 0;
	src_c = 0;

	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}

	while (src[src_c] != '\0' && src_c < n)
	{
		dest[dest_c] = src[src_c];
		src_c++;
		dest_c++;
	}
	dest[dest_c] = '\0';

	return (dest);
}
