#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse with recurtion
 * @s: string to print
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
