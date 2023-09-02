#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: The number of argument
 * @argv: The one-dimensional array
 * Return: it always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
