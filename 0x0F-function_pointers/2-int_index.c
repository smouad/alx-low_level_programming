#include "function_pointers.h"

/**
 * int_index - function serches for an intger
 * @array: the array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to cmp values
 * Return: the index of the int or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
