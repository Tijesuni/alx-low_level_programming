#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - a function that print strings
 * @separator: character that separates the strings
 * @n: the total number of parameters
 * @...: The paarameters to be paassed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
