#include <stdio.h>
/**
 * main - prints alphabet in lowercase ans then upercase
 * Return: 0
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
}
