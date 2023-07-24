#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _isalpha - checks if the character is lower or uppercase or otherwise
 * @c: character to be checked
 * Return: 1 if c is upper or lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
