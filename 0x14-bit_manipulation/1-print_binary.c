#include "main.h"

/**
 * print_binary - print a binary of @n
 * @n: to ptint
*/
void print_binary(unsigned long int n)
{
	int count = (sizeof(unsigned long int) * 8) - 1;

	while ((n & 1 << count) == 0 && count > 0)
		count--;

	while (count >= 0)
	{
		if (n & 1 << count)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		count--;
	}
}
