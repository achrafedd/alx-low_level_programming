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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
