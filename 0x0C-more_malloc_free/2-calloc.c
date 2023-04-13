#include "main.h"

/**
 * _calloc - allocate @nmemb of memory size of @size memorry is set to 0
 * @nmemb: number of ellements
 * @size: size of ellement
 * Return: pointer to the new allocated memorry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
