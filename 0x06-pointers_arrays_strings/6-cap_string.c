#include "holberton.h"

/**
 * _isalphalower - checks for lowercase or uppercase character
 * @c: the character to check
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalphalower(int c)

{
	return (c >= 'a' && c <= 'z');
}

/**
 * cap_string - changes lowercase to uppercase of beginning of word
 * @s: string to be changed
 * Return: str
 */
char *cap_string(char *s)
{
	int pos;

	for (pos = 0; s[pos] != '\0'; pos++)
	{
		if (s[pos] == 44 || s[pos] == 59 || s[pos] == 46)
		{
			pos++;
			if (_isalphalower(s[pos]))
				s[pos] -= 32;
		}
		if (s[pos] == 33 || s[pos] == 63 || s[pos] == 34)
		{

			pos++;
			if (_isalphalower(s[pos]))
				s[pos] -= 32;
		}
		if (s[pos] == 40 || s[pos] == 41 || s[pos] == 123)
		{
			pos++;
			if (_isalphalower(s[pos]))
				s[pos] -= 32;
		}
		if (s[pos] == ' ' || s[pos] == 125)
		{
			pos++;
			if (_isalphalower(s[pos]))
				s[pos] -= 32;
		}
		if (s[pos] == '\n' || s[pos] == '\t')
		{
			pos++;
			if (_isalphalower(s[pos]))
				s[pos] -= 32;
		}
	}
	return (s);
}
