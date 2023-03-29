#include "main.h"
/**
 * reverse_array - reverse an array of int
 * @a: array to reverse
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	i = 0;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
