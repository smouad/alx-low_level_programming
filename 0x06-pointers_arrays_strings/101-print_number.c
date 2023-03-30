#include "main.h"
/**
 * print_number - prints the number given on the sdout
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
	int x;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	x = n;
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
