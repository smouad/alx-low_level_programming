#include <stdlib.h>

/**
 * malloc_cheked - allocate memory and if it fails exit with status 98
 * @b: number of bytes to allocat
 * Return: pointer to the space allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
