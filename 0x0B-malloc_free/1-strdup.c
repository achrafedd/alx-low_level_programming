#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - copy a string with malloc
 *
 * @str: the string
 *
 * Return: a pointer to the String, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *x;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	x = (char *)malloc(size + 1);

	if (!x)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		x[i] = str[i];
	}

	x += '\0';

	return (x);
}
