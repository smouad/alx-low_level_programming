#include "main.h"

/**
 * string_toupper - change all lower case letter to upper case
 * @str: the string to change
 * Return: a pointer to str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
