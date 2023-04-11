#include "main.h"
/**
 * _strncat - concatinate n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: n bytes to concatinate
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && n > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
