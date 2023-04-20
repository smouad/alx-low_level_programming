#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - do operatioon
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0)
	{
		printf("ERROR\n");
		exit(1);
	}
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(1);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
