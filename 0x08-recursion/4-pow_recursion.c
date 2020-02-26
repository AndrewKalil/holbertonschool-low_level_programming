#include "holberton.h"

/**
 * _pow_recursion - retuns value of x rased to the y power
 * @x: base value
 * @y: exponent
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
