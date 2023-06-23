#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints number 0-10 using putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = i % 10;
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
