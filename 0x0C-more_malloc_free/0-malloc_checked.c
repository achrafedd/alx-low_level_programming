#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (!x)
	{
		exit(98);
	}
	return (x);
}
