#include <stdlib.h>

/**
 * _strdup - copy a string with malloc
 *
 * @str: the string
 *
 * Return: a pointer to the String, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, size = sizeof(str);
	char *x = (char *)malloc(size);

	if (size == 0 || !x)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		x[i] = str[i];
	}

	x += '\0';

	return (x);
}
