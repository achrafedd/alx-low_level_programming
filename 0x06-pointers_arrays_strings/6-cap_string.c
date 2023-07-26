#include "main.h"

/**
 * cap_string - capitalize the string
 *
 * @s: string
 *
 * Return: the capitalized string
*/
char *cap_string(char *s)
{
	int i, j;
	char seq[14];

	seg = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == seq[j])
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
