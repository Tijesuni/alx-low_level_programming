#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all alphabets except q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	putchar('\n');
	return (0);
}
