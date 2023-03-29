#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: bytes to coppy
 * Return: a pinter to the coppy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
