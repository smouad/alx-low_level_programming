#include "3-calc.h"

/**
 * op_add - adds @a and @b
 * @a: first nbr
 * @b: second nbr
 * Return: returns the sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract @a and @b
 * @a: first nbr
 * @b: second nbr
 * Return: returns the diffrence of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples @a and @b
 * @a: first nbr
 * @b: second nbr
 * Return: returns the product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide @a and @b
 * @a: first nbr
 * @b: second nbr
 * Return: returns the division of @a and @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of @a and @b
 * @a: first nbr
 * @b: second nbr
 * Return: returns the remainder of the division of @a and @b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
