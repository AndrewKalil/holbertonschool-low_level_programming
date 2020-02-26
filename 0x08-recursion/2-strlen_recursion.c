#include "holberton.h"

/**
 * _strlen_recursion - retruns length of of a string
 * @s: variable that contains string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
