#include "main.h"

/**
 * _isalpha - check if the charachter is alphabetic
 *
 * @c: character
 *
 * Return: 1 if the character is alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 95 && c <= 122))
	{
		return (1);
	}
	return (0);
}
