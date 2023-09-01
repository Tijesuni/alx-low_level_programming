#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit
 * @c: The number to be checked
 * Return: 1if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
