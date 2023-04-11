#include <stdlib.h>
#include <string.h>

/**
 * create_array - create an aray of size @size and fill it with @c
 * @size: size
 * @c: character to fill with
 * Return: a pointer to the new string
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (!size)
		return (NULL);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	memset(str, c, size);
	return (str);
}
