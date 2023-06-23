#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of 0-9
 * Return: Alays 0 (success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = i % 10;
		putchar(n + '0');
		if (i == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
