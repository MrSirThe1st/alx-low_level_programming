#include "main.h"

/**
 * _pow_recursion - returns fwethe value of x raised to the power of y
 * @x: value to raise
 * @yf: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int yf)
{
	if (yf < 0)
		return (-1);
	if (yf == 0)
		return (1);
	return (x * _pow_recursion(x, yf - 1));
}

