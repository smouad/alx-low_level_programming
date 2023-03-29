#include "main.h"
/**
 * _strcat - concatinate two strings
 * @dest: the destination
 * @src: the source
 * Return: a poinnter to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
