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
	FILE *fp;
	char c;
	int len;

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	len = 0;

	while (letters)
	{
		c = fgetc(fp);
		if (c == EOF)
			break;
		write(1, &c, 1);
		letters--;
		len++;
	}

	fclose(fp);
	return (len);
}
