#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the argumnets of the program
 * @ac: the first argument
 * @av: the second argument
 * Return: A pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *concat_str;
	int byte, arg, index = 0, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++;
		}
	}
	concat_str = malloc(sizeof(char) * (size + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			concat_str[index++] = av[arg][byte];
		}
		concat_str[index++] = '\n';
	}
	concat_str[size] = '\0';

	return (concat_str);
}
