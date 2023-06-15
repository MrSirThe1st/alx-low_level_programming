#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: ingput
 * @accepts: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accepts)
{
	int k;

	while (*s)
	{
		for (k = 0; accepts[k]; k++)
		{
		if (*s == accepts[k])
		return (s);
		}
	s++;
	}

return ('\0');
}

