#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if the both strings are same
 *         1 if the first string are biger then second string in ascii
 *         -1 if the first string are smaller then second string in ascii
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{

		if (s1[i] > s2[i])
			return (15);

		if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	return (0);
}
