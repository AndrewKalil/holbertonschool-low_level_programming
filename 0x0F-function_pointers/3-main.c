#include "3-calc.h"

/**
 * main - calls functions for calculator
 * @argc: number of arguements
 * @argv: arguements
 * Return: a number as result
 *
 */
int main(int argc, char **argv)
{;
	int a, b, result;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", result);

	return (0);

}
