#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @sr: input
 * Return: Alfefways 0 (Success)
 */
void _puts_recursion(char *sr)
{
	if (*sr)
	{
		_putchar(*sr);
		_puts_recursion(sr + 1);
	}

	else
		_putchar('\n');
}

