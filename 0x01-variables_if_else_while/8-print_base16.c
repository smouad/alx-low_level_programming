#include <stdio.h>
/**
 * main - print 16 base
 * Return: 0
 */
int main(void)
{
	char c, n;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
}
