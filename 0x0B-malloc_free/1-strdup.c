#include <stdlib.h>

/**
 * _strlen - calculate the length of @str
 * @str: string to work with
 * Return: the length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * _strdup - duplicates a striing
 * @str: the string to duplicate
 * Return: a pointer to the new allocated string
 */

char *_strdup(char *str);
{
	int len, i = 0;
	char *dup;

	len = _strlen(str);
	dup = malloc(len + 1)
	if (!dup)
		return (NULL);
	while (str[i])
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
