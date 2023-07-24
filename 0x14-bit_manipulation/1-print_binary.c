#include "main.h"

/**
 * print_binary - its prints the binary equivalent of a decimal number
 * @n: is tha number to print in binary
 */
void print_binary(unsigned long int n)
{
	int is, count = 0;
	unsigned long int current;

	for (is = 63; is >= 0; is--)
	{
		current = n >> is;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

