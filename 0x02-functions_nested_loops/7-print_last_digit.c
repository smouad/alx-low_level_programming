#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	n = _abs(n);
	a = n % 10;
	a = _abs(a);
	_putchar(a + '0');
	return (a);
}
