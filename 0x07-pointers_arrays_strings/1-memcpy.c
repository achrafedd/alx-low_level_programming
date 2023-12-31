#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
