#include "main.h"

/**
 * _memset - sets n bytes of string s with the const byte b
 * @s: the string to make the change on
 * @b: the const byte
 * @n: the number of bytes
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
