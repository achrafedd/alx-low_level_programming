#include "main.h"

/**
 * rot13 - encodes a string
 *
 * @s: string
 *
 * Return: encoded string
*/
char *rot13(char *s)
{
	int i, j;
	char first[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char second[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == first[j])
			{
				s[i] = second[j];
				break;
			}
		}
	}

	return (s);
}
