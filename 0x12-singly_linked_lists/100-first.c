#include <stdlib.h>
#include <stdio.h>

/**
 * kwanza - prints before main
 */
void __attribute__ ((constructor)) kwanza()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

