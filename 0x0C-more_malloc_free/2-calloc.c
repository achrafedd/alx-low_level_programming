#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 * @size: size of the type
 *
 * Return: pointer of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (!x)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		x[i] = 0;

	return (x);
}
