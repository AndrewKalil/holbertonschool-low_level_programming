#include <stdio.h>

/**
 * main - this program prints the word fizz for multiples of 3, the word
 * buzz for multiples of 5 and fizzbuzz for multiples of both 3
 * 3 and 5
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 3 != 0 && a % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d ", a);
		}
	}
	printf("\n");

	return (0);
}
