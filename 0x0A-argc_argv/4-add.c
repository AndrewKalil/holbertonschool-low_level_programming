#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints arguments of a program
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: always 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int sum, a, b;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (argv[a][b] < 48 || argv[a][b] > 59)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
