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
		printf("Error: Incorect argumen number!\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
