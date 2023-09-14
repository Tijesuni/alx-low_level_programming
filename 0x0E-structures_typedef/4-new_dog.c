#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - counts the length of the string
 * @str: The string to be counted
 * Return: the length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copy the string to dest
 * @dest: where the copied string is stored
 * @src: where the string is copied from
 * Return: the destination
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - saves a copy o fname and dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: The owner of the dog
 * Return: variable jake
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jake;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	jake = malloc(sizeof(dog_t));
	if (jake == NULL)
		return (NULL);

	jake->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (jake->name == NULL)
	{
		free(jake);
		return (NULL);
	}

	jake->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (jake->owner == NULL)
	{
		free(jake->name);
		free(jake);
		return (NULL);
	}

	jake->name = _strcopy(jake->name, name);
	jake->age = age;
	jake->owner = _strcopy(jake->owner, owner);

	return (jake);
}
