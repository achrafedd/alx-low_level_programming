#include "main.h"

/**
 * str - compare two strings
 *
 * @s1: string
 * @s2: string
 * @i: integer
 * @j: integer
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise return 0
 */

int str(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str(s1, s2, i + 1, j) || str(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - compare two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	return (str(s1, s2, 0, 0));
}
