#include "main.h"
#include <string.h>

/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string
 * @i: integer
 * @j: integer
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (palindrome(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (strlen(s) == 0)
		return (1);

	return (palindrome(s, 0, strlen(s) - 1));
}
