#include "variadic_functions.h"

/**
 * print_c - prints a character
 * @args: va_list containing informations about the character to print
 */

void print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_i - prints an integer
 * @args: va_list containing informations about the integer to print
 */

void print_i(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_f - prints a float
 * @args: va_list containing informations about the float to print
 */

void print_f(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_s - prints a string
 * @args: va_list containing informations about the string to print
 */

void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints the four data types
 * @format: list of types of arguments
 */

void print_all(const char *const format, ...)
{
	int i = 0, j;
	va_list args;
	char *sep = "";

	t_print funcs[] = {
		{"c", print_c}, {"i", print_i}, {"f", print_f}, {"s", print_s}};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != funcs[j].c[0])
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print_func(args);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
