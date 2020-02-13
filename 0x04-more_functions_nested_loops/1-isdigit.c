#include "holberton.h"

/**
 * _isdigit - checks for digits
 * @c: the digit to be checked
 * Return: 1 if its a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
