#include "main.h"
/**
 * _strcmp - compaires 2 strings
 *@s1: first string
 *@s2: second string
 *Return: the diffrence between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

