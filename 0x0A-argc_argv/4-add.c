#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: The number of argument
 * @argv: The one-dimensional array
 * Return: it always 0 (success) and 1 if Error
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
