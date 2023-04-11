#include "main.h"
/**
 * _strchr - locate a character on string
 * @s: the ssthing
 * @c: the char
 * Return: ponter of that char on the string or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
