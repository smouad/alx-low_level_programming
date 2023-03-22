#include "main.h"

/**
 * _isalpha - check the code for ALX School students.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
