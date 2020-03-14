#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguements
 * @n: number of arguements being inputted
 * Return: sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
