#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: prints the alphabets in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
