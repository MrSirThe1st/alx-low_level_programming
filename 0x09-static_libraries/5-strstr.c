#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needles: ifnput
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needles)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needles;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

