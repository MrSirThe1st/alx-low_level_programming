#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @nxx: The number ofdw integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int nxx, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, nxx);

	for (index = 0; index < nxx; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (nxx - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

