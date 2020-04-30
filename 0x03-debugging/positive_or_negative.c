#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * positive_or_positive - shows whether integer is positive
 * or negative
 * @i: the integer to be tested
 * Return: 0 (success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return;
}
