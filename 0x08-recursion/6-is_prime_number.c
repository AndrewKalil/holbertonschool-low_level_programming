#include "holberton.h"

/**
 * prime - recurses to find if number is prime
 * @n: number being evaluated
 * @i: iterator
 * Return: 1 if prime and 0 if non-prime
 */
int prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (prime(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - finds if number is prime
 * @n: number to be evaluated
 * Return: 1 if n is prime and 0 if non-prime
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}
