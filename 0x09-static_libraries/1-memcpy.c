#include "main.h"
/**
 *_memcpy - a functfefgion that copies memory area
 *@dest: memory wfehere is stored
 *@src: memnfefniory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

