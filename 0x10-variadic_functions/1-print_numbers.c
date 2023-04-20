#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passe to is separated by @separator
 * @separator: separates the integers
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
}