#include "main.h"

/**
 * _strlen_recursion - len of string with recursion
 * @s: string to work with
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
