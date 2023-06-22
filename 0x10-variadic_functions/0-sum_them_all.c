#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @ns: The number of paferamters passed to the function.
 * @...: A variable number of paramssters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int ns, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, ns);

	for (i = 0; i < ns; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

