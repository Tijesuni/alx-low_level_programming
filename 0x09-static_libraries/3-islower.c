#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
