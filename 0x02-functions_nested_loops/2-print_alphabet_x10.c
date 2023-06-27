#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for  (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
