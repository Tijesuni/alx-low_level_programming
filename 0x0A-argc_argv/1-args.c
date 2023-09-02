#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of argument
 * @argv: The one-dimensional array
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)**argv;

	return (0);
}
