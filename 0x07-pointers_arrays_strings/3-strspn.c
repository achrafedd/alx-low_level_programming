#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int b = 0, n;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = b;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b += 1;
			}
		}
		if (n == b)
			break;
	}

	return (b);
}
