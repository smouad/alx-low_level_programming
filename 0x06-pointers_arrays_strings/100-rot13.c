#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @str: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *str)
{
	char *input;
	char *output;
	int i, j;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (input[j])
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break ;
			}
			j++;
		}
		i++;
	}
	return (str);
}
