#include "main.h"

/**
 * rev_string - reversing the string
 *
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char new_s[_strlen(s) - 1];
	int i, j;

	i = _strlen(s) - 1;
	j = 0;

	while (i >= 0)
	{
		new_s[j] = s[i];
		i--;
		j++;
	}

	s = new_s;
}
