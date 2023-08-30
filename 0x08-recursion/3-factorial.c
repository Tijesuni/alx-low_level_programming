#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: The given number to be factorized
 * Return: factorized number, 1, and -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
