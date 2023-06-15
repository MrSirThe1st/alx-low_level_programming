#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @sizes: size of array
 * @c: char to assign
 * Description: creafete array of size size and assign char c
 * Return: pointer to array,ve NULLve if fail
 *
 */
char *create_array(unsigned int sizes, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * sizes);
	if (sizes == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < sizes; i++)
		str[i] = c;
	return (str);
}
