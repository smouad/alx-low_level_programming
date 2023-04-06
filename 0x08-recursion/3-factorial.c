#include "main.h"

/**
 * factorial - calculate with recursion the factorial of @n
 * @n: number to calculate
 * Return: the results or -1 if @n is less than 0
 */

int factorial(int n)
{
	int nb = 1;

	if (n < 0)
		return (-1)
	if (n == 0)
		return (1);
	else
		nb = n * factorial(n - 1);
	return (nb);
}
