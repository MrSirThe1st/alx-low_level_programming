#include "main.h"

/**
 * get_endianness - this function will check if a machine is little or big endian
 * Return: 0s for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

