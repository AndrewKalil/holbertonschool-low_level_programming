#include <stdio.h>

/**
 * main - checks for the lasgest prime number and prints it
 * Return: Always 0
 */
int main(void)
{
	long num;
	long divisor;

	num = 612852475143;

	for (divisor = 2; divisor < num; divisor++)
	{
		while (num % divisor == 0)
		{
			num = num / divisor;
		}
	}
	printf("%lu", divisor);
	printf("\n");
	return (0);
}
