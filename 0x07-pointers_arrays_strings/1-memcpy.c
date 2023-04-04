#include "main.h"

/**
 * _memcpy - copies @n bytes from @src to @dest
 * @dest: the destination
 * @src: source
 * @n: number of bytes to copy
 * Return: a ponter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
