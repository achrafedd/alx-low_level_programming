#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (!*s)
		return (0);

	i++;
	i += _strlen_recursion(s + 1);

	return (i);
}
