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
	int i;
	int j;

	char sym[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && _isalphalower(s[i]))
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sym[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
