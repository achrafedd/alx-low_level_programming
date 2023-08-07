#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array whit malloc
 *
 * @size: the size of the array
 * @c: data stored in the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x = (char *)malloc(size);

	if (size == 0 || !x)
		return (NULL);
	for (i = 0; i < size; i++)
		x[i] = c;

	return (x);
}
