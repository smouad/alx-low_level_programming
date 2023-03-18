#include <stdio.h>
/**
 * main - print numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
