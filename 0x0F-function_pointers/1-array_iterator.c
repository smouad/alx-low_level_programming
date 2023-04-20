#include "function_pointers.h"

/**
 * array_iterator - function apply @action on each element of @array
 * @array: the array to work with
 * @size: the size of the array
 * @action: pointer to the function that gonna apply
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
