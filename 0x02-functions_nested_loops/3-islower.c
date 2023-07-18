#include "main.h"

/**
 * _islower - check characters if lowercase or not
 *
 * @c: character
 *
 * Return: 1 if character is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
