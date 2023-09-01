#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _abs - returns the absolute value of number
 * @n: the number to be checked
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
