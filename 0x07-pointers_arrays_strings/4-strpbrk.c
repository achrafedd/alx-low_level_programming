#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: subsring
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s != accept[i] && accept[i] != '\0')
	{
		s++;
		i++;
	}

	if (*s == accept[i])
	{
		return ((char *)s - 1);
	}
	return (NULL);
}
