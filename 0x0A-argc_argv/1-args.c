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
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
