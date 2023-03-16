#include <unistd.h>
/**
 * main - print on the stderr
 *
 * Return: 0
 */
int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 56);
	return (0);
}
