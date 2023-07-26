#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: string
 *
 * Return: encoded string
*/
char *leet(char *s)
{
	int i, j;
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (letters[j] == s[i] || (letters[j] + 32) == s[i])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
