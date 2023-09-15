#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of the parameters
 * @n: the number of parameters passed
 * @...: a variable of parameters
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
