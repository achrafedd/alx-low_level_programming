#include "main.h"
#include <string.h>

/**
 * _strcpy - copy a string into onther
 *
 * @dest: the copeid string
 * @src: the original string
 *
 * Return: the copeid string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
