#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: a pointer to str
 */

char *rot13(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
		(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
				str[i] += 13;
			else
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
