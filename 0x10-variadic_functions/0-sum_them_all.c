#include "variadic_functions.h"

/**
 * sum_them_all - founction adds the arguments passed to it
 * @n: number of argument
 * Return: the sum of all arguments or 0 if @n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
