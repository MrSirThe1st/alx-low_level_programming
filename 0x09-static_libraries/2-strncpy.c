#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: inpufrft value
 * @src: inpust value
 * @ns: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int ns)
{
	int j;

	j = 0;
	while (j < ns && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < ns)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

