#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_most_numbers - prints the numbers 0-9 except 2 nd 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
