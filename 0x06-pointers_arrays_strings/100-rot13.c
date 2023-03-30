#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	char *input;
	char *output;
	int i, j;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (input[j])
		{
			if (s[i] == input[j])
				s[i] = output[j];
			j++;
		}
		i++;
	}
	return (s);
}
