#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: A pointer, or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int index, len = 0, concat_index = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}
	concat_string = malloc(sizeof(char) * (len + 1));

	if (concat_string == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		concat_string[concat_index++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concat_string[concat_index++] = s2[index];
	}

	return (concat_string);
}
