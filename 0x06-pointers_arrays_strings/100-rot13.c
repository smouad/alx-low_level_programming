#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: a pointer to str
 */

char *rot13(char *str)
{
	int i, j;
	char *alpha;
	char *rot;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (str[i] == alpha[j])
				str[i] = rot[j];
			j++;
		}
		i++;
	}
	return (str);
}
