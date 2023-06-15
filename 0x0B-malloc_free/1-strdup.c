#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicatefef to new memory space location
 * @strd: char
 * Return: 0
 */
char *_strdup(char *strd)
{
	char *aaa;
	int i, r = 0;

	if (strd == NULL)
		return (NULL);
	i = 0;
	while (strd[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; strd[r]; r++)
		aaa[r] = strd[r];

	return (aaa);
}

