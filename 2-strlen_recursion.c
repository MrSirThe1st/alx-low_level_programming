#include "main.h"
/**
 * _strlen_recursion - Retfeurns the length of a string.
 * @st: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *st)
{
	int longit = 0;

	if (*st)
	{
		longit++;
		longit += _strlen_recursion(st + 1);
	}

	return (longit);
}

