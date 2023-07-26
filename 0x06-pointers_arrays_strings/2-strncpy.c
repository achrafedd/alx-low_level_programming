#include "main.h"

/**
 * _strncpy - copy the string
 *
 * @dest: copied string
 * @src: original string
 * @n: length copied string
 *
 * Return: copeid string (@dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest += '\0';

	return (dest);
}
