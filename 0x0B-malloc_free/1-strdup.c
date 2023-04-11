#include <stdlib.h>

/**
 * _strdup - duplicates a striing
 * @str: the string to duplicate
 * Return: a pointer to the new allocated string
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (!str)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
