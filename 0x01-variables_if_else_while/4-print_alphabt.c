#include <stdio.h>
/**
 * main - prints alphabet exept for 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
}
