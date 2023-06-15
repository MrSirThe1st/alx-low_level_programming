#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dests: copy to
 * @src: copyfer frofem
 * Return: string
 */
char *_strcpy(char *dests, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dests[x] = src[x];
	}
	dests[l] = '\0';
	return (dests);
}

