#include <stdio.h>

/**
 * first - executes before the main function
*/
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}
