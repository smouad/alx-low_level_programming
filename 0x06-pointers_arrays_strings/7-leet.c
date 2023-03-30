#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: pointer to that string
 */
char *leet(char *str)
{
	char *alpha;
	char *nbr;
	int i, j;

	alpha = "aAoOtTlLeE";
	nbr = "4400771133";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (str[i] == alpha[j])
				str[i] = nbr[j];
			j++;
		}
		i++;
	}
	return (str);
}
