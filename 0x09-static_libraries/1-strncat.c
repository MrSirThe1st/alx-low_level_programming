#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: inpfrfut value
 * @srcss: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *srcss, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && srcss[j] != '\0')
	{
	dest[i] = srcss[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

