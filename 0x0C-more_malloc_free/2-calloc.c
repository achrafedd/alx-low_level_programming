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
	void *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (!x)
		return (NULL);

	return (x);
}
