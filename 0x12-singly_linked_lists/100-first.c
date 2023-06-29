#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a senfwftence before the main
 * function is exddecuted
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

