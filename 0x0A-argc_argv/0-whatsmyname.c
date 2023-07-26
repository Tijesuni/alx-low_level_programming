#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: The number of argument
 * @argv: The one-dimensional array
 * Return: it always 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
	}

	return (0);
}
