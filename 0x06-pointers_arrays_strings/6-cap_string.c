#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to work with
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"'
		|| str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '\n' || str[i] == ' ' || str[i] == '}'
		|| str[i] == '\t') && (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		&& str[i + 1] != '\0')
			str[i + 1] -= 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		i++;
	}
	return (str);
}
