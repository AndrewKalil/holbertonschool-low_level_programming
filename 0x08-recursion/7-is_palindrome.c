#include "holberton.h"

/**
 * _strlen_recursion - retruns length of of a string
 * @s: variable that contains string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _check - if start char and end char are same until mid char
 * @s: variabe containg string
 * @i: iteration forward
 * @j: iteration backwards
 * Return: 1 if char is same and 0 if not
 */
int _check(char *s, int i, int j)
{
	if (i < j)
	{
		if (s[i] == s[j])
			return (_check(s, i + 1, j - 1));

		else if (s[i] != s[j])
			return (0);

		else
			return (1);
	}

	return (1);
}

/**
 * is_palindrome - checks if word backwards is the same as
 * normal word
 * @s: variable containing string
 * Return: 1 if same 0 if not
 */
int is_palindrome(char *s)
{
	return (_check(s, 0, _strlen_recursion(s) - 1));
}
