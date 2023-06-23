#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints all single digit of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = i % 10;
		printf("%d", n);
	}
	printf("\n");
	return (0);

}
