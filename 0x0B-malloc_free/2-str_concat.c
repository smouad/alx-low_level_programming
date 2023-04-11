#include <stdlib.h>

/**
 * str_concat - concatinate @s1 and @s2 together in a new string
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1, len_s2;
	char *str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";i
	for (len_s1 = 0; s1[len_s1]; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2]; len_s2++)
		;
	str = malloc(sizeof(char) * (len_s1 + len_s2 + 1))
	if (!str)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
}
