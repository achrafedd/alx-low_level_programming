#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s == c)
		return ((char *) s);
	else
		return (NULL);
}
