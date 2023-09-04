#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Read file and print it
 *
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: length
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, str, letters);
	w = write(STDOUT_FILENO, str, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(str);
		return (0);
	}

	free(str);
	close(o);

	return (w);
}
