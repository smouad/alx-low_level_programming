#include "main.h"

/**
 * _puts_recursion - puts a string with recursion
 * @s: the string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		_puts_recurson(*s + 1);
	}
	else
		_putchar('\n');
}
