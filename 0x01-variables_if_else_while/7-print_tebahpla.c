#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints the alphabets in reversed order
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i  = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
