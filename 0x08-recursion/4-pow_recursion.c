
#include "main.h"
/**
 * _pow_recursion - calculate with recursion @x to the power of @y
 * @x: first int
 * @y: second int
 * Return: the result and -1 if @y less tha 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
