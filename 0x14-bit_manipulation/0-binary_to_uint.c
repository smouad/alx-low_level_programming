#include "main.h"

/**
 * binary_to_uint - transform a string of 0 an 1
 * to an unsigned int
 * @b: the string
 * Return: the unsigned int or 0 if it fails
*/

unsigned int binary_to_uint(const char *b)
{
	int len, count = 0;
	unsigned int c = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
	;
	len--;
	while (len >= 0 && b[count])
	{
		if (b[count] == '1')
			c = c | (1 << len--);
		else if (b[count] == '0')
			len--;
		else
			return (0);
		count++;
	}
	return (c);
}
