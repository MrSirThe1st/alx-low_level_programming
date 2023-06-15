#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting addreddsf of memory to be filled
 * @b: the desired vadwe
 * @n: number of bytes to be changed
 *
 * Return: changed array wddith new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

