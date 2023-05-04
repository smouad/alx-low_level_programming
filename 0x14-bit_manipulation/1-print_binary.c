#include "main.h"

/**
 * print_binary - print a binary of @n
 * @n: to ptint
*/
void print_binary(unsigned long int n)
{
	int count = 31;

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

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}