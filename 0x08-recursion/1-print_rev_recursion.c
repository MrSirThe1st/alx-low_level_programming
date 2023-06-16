#include "main.h"
/**
 * _print_rev_recursion - Printsfe a string in reverse.
 * @sh: The string to be printed.
 */
void _print_rev_recursion(char *sh)
{
	if (*sh)
	{
		_print_rev_recursion(sh + 1);
		_putchar(*sh);
	}
}


