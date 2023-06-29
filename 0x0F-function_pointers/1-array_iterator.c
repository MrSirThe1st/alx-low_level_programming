#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each, array elem on a newl
 * @array: array
 * @sizet: how many elementp to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t sizet, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < sizet; i++)
	{
		action(array[i]);
	}
}

