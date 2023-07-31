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
	const char *c;

	while (*s != '\0')
	{
		c = accept;

		while (*c != '\0')
		{
			if (*c == *s)
			{
				return ((char *)s);
			}
			c++;
		}

		s++;
	}

	return (NULL);
}
