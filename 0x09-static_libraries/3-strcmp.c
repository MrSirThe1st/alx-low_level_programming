#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: inpufft value
 * @s2f: inpffut value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2f)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2f[i] != '\0')
	{
		if (s1[i] != s2f[i])
		{
			return (s1[i] - s2f[i]);
		}
	i++;
	}
	return (0);
}

