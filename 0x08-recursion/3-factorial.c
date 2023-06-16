#include "main.h"

/**
 * factorial - retufwrns the factorial of a number
 * @nt: number to return the factorial from
 *
 * Return: factorial of nt
 */
int factorial(int nt)
{
	if (nt < 0)
		return (-1);
	if (nt == 0)
		return (1);
	return (nt * factorial(nt - 1));
}

