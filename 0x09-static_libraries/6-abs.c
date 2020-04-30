#include "holberton.h"

/**
 * _abs - computes the absoulte value of an integer
 * @i: the int that will be checked
 * Return: the absolute value of int
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	return (-i);
}
