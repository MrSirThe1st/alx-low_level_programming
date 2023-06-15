#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @avv: double dwdpointer array
 * Return: 0
 */
char *argstostr(int ac, char **avv)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || avv == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; avv[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; avv[i][n]; n++)
	{
		str[r] = avv[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

