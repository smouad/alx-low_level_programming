#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @ac: argument count
 * @av: arguments
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i, j, sum;

	if (ac < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				if (isdigit(av[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(av[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
