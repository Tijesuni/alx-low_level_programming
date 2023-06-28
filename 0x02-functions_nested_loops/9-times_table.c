#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * times_table - prints 9 times table starting with 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int timesNo = i * j;

			if (timesNo < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((timesNo / 10) + '0');
			}
			_putchar((timesNo % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
