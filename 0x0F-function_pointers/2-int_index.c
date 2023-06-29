#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @sizeb: size of elements inr array
 * @cmp: pointer to funcd of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int sizeb, int (*cmp)(int))
{
	int i;

	if (array == NULL || sizeb <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < sizeb; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

