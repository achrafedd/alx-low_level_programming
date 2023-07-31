#include "main.h"
#include <stddef.h>

/**
 *
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
