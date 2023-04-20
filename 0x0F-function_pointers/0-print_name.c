#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name to print
 * @f: a pointer to the function that gonna print @name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
