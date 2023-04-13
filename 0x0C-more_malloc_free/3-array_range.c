#include "main.h"

/**
 * array_range - allocate an array of size @max - @min
 * and fill it from value of @min to @max
 * @min: the smallest number of thr range
 * @max: the max number of the range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
