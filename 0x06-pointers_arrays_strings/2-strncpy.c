#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: variable where string will be copied
 * @src: variable that will provide the string
 * @n: size limit of bytes that can be coppied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
