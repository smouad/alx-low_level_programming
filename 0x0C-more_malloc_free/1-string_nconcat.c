#include "main.h"

/**
 * string_nconcat - concatinate @s1 and @n bytes from @s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pinter to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *str;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (len2 < n)
		str = malloc(len1 + len2 + 1);
	str = malloc(len1 + n + 1);
	if (!str)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n || s2[j]; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
