#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct s_print - to print diffrent types
 * @c: the format
 * @print_func: pointer to the function to print
 */

typedef struct s_print
{
	char *c;
	void (*print_func)(va_list);
} t_print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

void print_c(va_list args);
void print_i(va_list args);
void print_f(va_list args);
void print_s(va_list args);

#endif
