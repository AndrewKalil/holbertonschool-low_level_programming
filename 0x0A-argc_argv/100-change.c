#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - checks if it is a digit
 * @n: Number
 * Return: If it is a number, retrun 1 else return 0
 */
int is_num(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert a string to a number
 * @s: String to be converted
 * Return: returns the number
 */
int _atoi(char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_num(s[i]))

		{
			num = (s[i] - '0') + num * 10;
		}
		if (s[i + 1] == ' ')
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (num * sign);
}

/**
 * main - prints the minimum number of coins
 * for a specific amount of change
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 for success, for error
 */
int main(int argc, char *argv[])
{
	int num, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = _atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
