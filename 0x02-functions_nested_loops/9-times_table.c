#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * times_table - prints 9 times table starting with 0
 */

void times_table(void)
{
	int i, j, timesNo;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			timesNo = i * j;

			if (timesNo < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((timesNo / 10) + '0');
			}
			_putchar((timesNo % 10) + '0');
		}
		_putchar('\n');
	}
}
