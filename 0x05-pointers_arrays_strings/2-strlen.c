#include "main.h"

/**
 * _strlen - count numbers of letters in string
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
