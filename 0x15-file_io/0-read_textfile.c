#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *                 to its POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print.
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *charSize;

	if (filename == NULL)
		return (0);

	charSize = malloc(sizeof(char) * letters);
	if (charSize == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, charSize, letters);
	w = write(STDOUT_FILENO, charSize, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(charSize);
		return (0);
	}

	free(charSize);
	close(o);

	return (w);
}
