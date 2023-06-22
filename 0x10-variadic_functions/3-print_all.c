#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str_po, *sep_po = "";

	va_list list_po;

	va_start(list_po, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep_po, va_arg(list_po, int));
					break;
				case 'i':
					printf("%s%d", sep_po, va_arg(list_po, int));
					break;
				case 'f':
					printf("%s%f", sep_po, va_arg(list_po, double));
					break;
				case 's':
					str_po = va_arg(list_po, char *);
					if (!str_po)
						str_po = "(nil)";
					printf("%s%s", sep_po, str_po);
					break;
				default:
					index++;
					continue;
			}
			sep_po = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(list_po);
}

